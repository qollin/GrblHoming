rem 18 avril 2014
rem LETARTARE
rem correct on obtient 'grblController.exe'  de 1 344 778 octets 

rem cd 3.5.1_A

set QMAKESPEC=o:\DevCpp\qt4.7.3\mkspecs\win32-g++ 

rem set PATH=%PATH%;o:\DevCpp\qt4.7.3\bin;o:\DevCpp\MinGw32-TDM\bin 

set PATH=%PATH%;u:\DONNEES\SVN_COMPILE\qt\4.7.3\bin;o:\DevCpp\MinGw32-TDM\bin 

qmake -config release -spec win32-g++ GcodeSenderGUIthreads.pro

rem pour debug 

rem qmake -config debug -spec win32-g++ GcodeSenderGUIthreads.pro

mingw32-make -fmakefile.release

rem release\GrblController.exe 