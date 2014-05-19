rem translate.bat

echo off

set PATH=%PATH%;u:\DONNEES\SVN_COMPILE\qt\4.7.3\bin

rem create "trlocale\*.ts"

lupdate.exe  GcodeSenderGUIthreads.pro

rem create *.qm

rem lrelease trlocale\GrblController_fr.ts -qm trlocale\GrblController_fr.qm

rem xcopy trlocale\GrblController_fr.qm src\trlocale\

rem xcopy trlocale\GrblController_fr.qm cons\trlocale
