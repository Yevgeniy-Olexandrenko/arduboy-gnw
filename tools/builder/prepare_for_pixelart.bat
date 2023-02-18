@echo off

prj\Release\builder.exe prepare-for-pixelart

if %ERRORLEVEL% NEQ 0 (
	pause
	exit %ERRORLEVEL%
)
