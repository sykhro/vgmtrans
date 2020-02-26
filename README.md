
# VGMTrans-qt - Video Game Music Translator

![Build and test](https://github.com/sykhro/vgmtrans-qt/workflows/Build%20and%20test/badge.svg?branch=refactor)

<p align="center">
<img height="512" src="https://raw.githubusercontent.com/sykhro/vgmtrans-qt/refactor/.github/prev.png"><br>
</p>

VGMTrans-qt is an experimental friendly fork of VGMTrans that aims to modernize and clean the codebase with the final intent of making the tool more robust and extendable.
Format support is the same as upstream, but VGMTrans-qt is available cross-platform.

The latest build is always available for Linux (AppImage), OSX and Windows as GitHub Actions artifacts [here](https://github.com/sykhro/vgmtrans-qt/actions).
Compiling instructions are available [in the wiki](https://github.com/sykhro/vgmtrans-qt/wiki/Building).

This software is released under the zlib/libpng License. See LICENSE.txt for details.

Contributors
------------

- Mike: The original author of the tool, worked on a lot of formats.
- loveemu: Creator of github project, worked on bugfixes/improvements.
- Sound Test: 774: Anonymous Japanese guy in 2ch BBS, worked on the HOSA format, analyzing the TriAcePS1 format and such.
- sykhro: General maintenance work, ported the tool to Qt.

### Special Thanks

- Bregalad: Author of [GBAMusRiper](http://www.romhacking.net/utilities/881/), great reference of MP2k interpretation.
- Nisto: Author of [kdt-tool](https://github.com/Nisto/kdt-tool), thank you for your approval of porting to VGMTrans.

Third party libraries
------------

- [FluidSynth](https://github.com/FluidSynth/fluidsynth)
- [TinyXML](http://www.grinninglizard.com/tinyxml/)
- [Qt](https://www.qt.io/download-open-source)
- [PhantomStyle](https://github.com/randrew/phantomstyle)
- [zlib](https://github.com/madler/zlib)
- [fmtlib](https://github.com/fmtlib/fmt)
