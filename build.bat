@echo off
pushd %~dp0
set num=%1
..\settings\mingw64\bin\g++.exe -fdiagnostics-color=always -g .\problems\%num%\main.cpp -o .\problems\%num%\main.exe -static -g