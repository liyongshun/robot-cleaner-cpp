@echo off

@echo try build %cd%

set ROOT=%cd%

if exist "L:" subst L: /d
subst L: .

if not exist "build" mkdir build

@echo *******************************************************************************
@echo start generate cmake project...

L:
cd build
rem cmake -G"Visual Studio 8 2005" ..
rem cmake -G"Visual Studio 9 2008" ..
rem cmake -G"Visual Studio 2010" ..
cmake ..

@echo *******************************************************************************
@echo start build cmake project...

cmake --build .

@echo *******************************************************************************
@echo start run tests...

cd debug
call game-of-life.exe

if %errorlevel% neq 0 goto FAIL ^
else goto SUCC

:SUCC
@echo *******************************************************************************
@echo build %ROOT% succ
goto EXIT

:FAIL
@echo *******************************************************************************
@echo build %ROOT% fail

:EXIT
cd /d %ROOT%
pause
