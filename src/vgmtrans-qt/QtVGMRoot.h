/*
 * VGMTrans (c) 2002-2019
 * Licensed under the zlib license,
 * refer to the included LICENSE.txt file
 */

#pragma once

#include <QObject>
#include "Root.h"

class QtVGMRoot : public QObject, public VGMRoot {
    Q_OBJECT

   public:
    virtual void UI_SetRootPtr(VGMRoot **theRoot);
    virtual void UI_PreExit();
    virtual void UI_Exit();
    virtual void UI_AddRawFile(RawFile *newFile);
    virtual void UI_CloseRawFile(RawFile *targFile);

    virtual void UI_OnBeginScan();
    virtual void UI_SetScanInfo();
    virtual void UI_OnEndScan();
    virtual void UI_AddVGMFile(VGMFile *theFile);
    virtual void UI_AddVGMSeq(VGMSeq *theSeq);
    virtual void UI_AddVGMInstrSet(VGMInstrSet *theInstrSet);
    virtual void UI_AddVGMSampColl(VGMSampColl *theSampColl);
    virtual void UI_AddVGMMisc(VGMMiscFile *theMiscFile);
    virtual void UI_AddVGMColl(VGMColl *theColl);
    virtual void UI_RemoveVGMColl(VGMColl *targColl);
    virtual void UI_BeginRemoveVGMFiles();
    virtual void UI_EndRemoveVGMFiles();
    virtual void UI_AddItemSet(VGMFile *file, std::vector<ItemSet> *itemset);
    virtual std::string UI_GetOpenFilePath(const std::string &suggestedFilename = "",
                                           const std::string &extension = "");
    virtual std::string UI_GetSaveFilePath(const std::string &suggestedFilename,
                                           const std::string &extension = "");
    virtual std::string UI_GetSaveDirPath(const std::string &suggestedDir = "");

   signals:
    void UI_AddedRawFile();
    void UI_RemovedRawFile();
    void UI_AddedVGMFile();
    void UI_RemovedVGMFile();
    void UI_AddedVGMColl();
    void UI_RemovedVGMColl();
    void UI_RemoveVGMFile(VGMFile *targFile);
    void UI_AddItem(VGMItem *item, VGMItem *parent, const std::string &itemName, void *UI_specific);
};

extern QtVGMRoot qtVGMRoot;
