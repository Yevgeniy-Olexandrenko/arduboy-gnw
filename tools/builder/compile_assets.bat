@echo off

prj\Release\builder.exe compile-assets

if %ERRORLEVEL% NEQ 0 (
	pause
	exit %ERRORLEVEL%
)
