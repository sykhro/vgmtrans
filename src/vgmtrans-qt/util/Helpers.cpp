/*
 * VGMTrans (c) 2002-2019
 * Licensed under the zlib license,
 * refer to the included LICENSE.txt file
 */

#include "Helpers.h"
#include <QPixmap>
#include <QBitmap>

QIcon MakeIconFromPath(QString path, QColor color) {
    QPixmap icon_pixmap{path};

    auto mask = icon_pixmap.createHeuristicMask(true);
    icon_pixmap.fill(color);
    icon_pixmap.setMask(mask);

    return QIcon(icon_pixmap);
}

const QIcon &iconForFileType(FileType filetype) {
    switch (filetype) {
        case FILETYPE_SEQ: {
            static QIcon i_gen{":/images/sequence-32.png"};
            return i_gen;
        }
        
        case FILETYPE_INSTRSET:{
            static QIcon i_gen{":/images/instrument-set-32.png"};
            return i_gen;
        }
        
        case FILETYPE_SAMPCOLL:{
            static QIcon i_gen{":/images/sample-set-32.png"};
            return i_gen;
        }

        default:
            break;
    }

    static QIcon i_gen{":/images/generic-audio-32.png"};
    return i_gen;
}


const QIcon &iconForItemType(VGMItem::Icon type) {
    switch (type) {
        case VGMItem::ICON_NOTE: {
            static QIcon i_gen{":/images/note_music-32.png"};
            return i_gen;
        }

        case VGMItem::ICON_SEQ:{
            static QIcon i_gen{":/images/sequence-32.png"};
            return i_gen;
            }

        case VGMItem::ICON_SAMPCOLL: {
            static QIcon i_gen{":/images/sample-set-32.png"};
            return i_gen;
        }

        case VGMItem::ICON_INSTRSET: {
            static QIcon i_gen{":/images/instrument-set-32.png"};
            return i_gen;    
        }

        case VGMItem::ICON_TRACK: {
            static QIcon i_gen{":/images/generic-audio-32.png"};
            return i_gen;            
        }

        case VGMItem::ICON_INSTR: {
            static QIcon i_gen{":/images/instr-32.png"};
            return i_gen;            
        }
        default:
            break;
    }

    static auto i_gen = QIcon(":/images/generic-audio-32.png");
    return i_gen;
}

QColor colorForEventColor(uint8_t eventColor) {
    switch (eventColor) {
        case CLR_UNKNOWN:
            return Qt::black;
        case CLR_UNRECOGNIZED:
            return Qt::red;
        case CLR_HEADER:
            return Qt::lightGray;
        case CLR_MISC:
            return Qt::gray;
        case CLR_MARKER:
            return Qt::gray;
        case CLR_TIMESIG:
            return Qt::green;
        case CLR_TEMPO:
            return Qt::darkGreen;
        case CLR_PROGCHANGE:
            return QColor(244, 152, 16, 255);
        case CLR_TRANSPOSE:
            return Qt::darkMagenta;
        case CLR_PRIORITY:
            return Qt::darkMagenta;
        case CLR_VOLUME:
            return QColor(174, 138, 190, 255);
        case CLR_EXPRESSION:
            return QColor(83, 43, 46, 255);
        case CLR_PAN:
            return QColor(50, 89, 61, 255);
        case CLR_NOTEON:
            return QColor(40, 123, 222, 255);
        case CLR_NOTEOFF:
            return QColor(65, 159, 211, 255);
        case CLR_DURNOTE:
            return QColor(73, 164, 219, 255);
        case CLR_TIE:
            return QColor(117, 109, 220, 255);
        case CLR_REST:
            return QColor(142, 101, 207, 255);
        case CLR_PITCHBEND:
            return Qt::magenta;
        case CLR_PITCHBENDRANGE:
            return Qt::magenta;
        case CLR_MODULATION:
            return QColor(176, 97, 0, 255);
        case CLR_PORTAMENTO:
            return Qt::magenta;
        case CLR_PORTAMENTOTIME:
            return Qt::magenta;
        case CLR_CHANGESTATE:
            return Qt::gray;
        case CLR_ADSR:
            return Qt::gray;
        case CLR_LFO:
            return Qt::gray;
        case CLR_REVERB:
            return Qt::gray;
        case CLR_SUSTAIN:
            return Qt::yellow;
        case CLR_LOOP:
            return QColor(188, 63, 60, 255);
        case CLR_LOOPFOREVER:
            return QColor(188, 63, 60, 255);
        case CLR_TRACKEND:
            return QColor(158, 41, 39, 255);
    }
    return Qt::red;
}

QColor textColorForEventColor(uint8_t eventColor) {
    switch (eventColor) {
        case CLR_UNKNOWN:
        case CLR_VOLUME:
            return Qt::white;
        default:
            return Qt::black;
    }
}
