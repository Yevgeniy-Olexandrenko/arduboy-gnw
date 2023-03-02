@echo off

net session >nul 2>&1
if %errorLevel% == 0 (
    echo Success: Administrative permissions confirmed.
) else (
    echo Failure: Current permissions inadequate. Run as administrator
    pause
    exit
)

rmdir %USERPROFILE%\Documents\Arduino\libraries\ArduboyGNW
mklink /D %USERPROFILE%\Documents\Arduino\libraries\ArduboyGNW %~dp0ArduboyGNW
