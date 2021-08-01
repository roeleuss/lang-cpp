@echo off

g++ -c %1.cpp -o %1.ow
g++ -S %1.cpp -o %1.sw
g++ -o %1.exe %1.ow
strip --strip-unneeded %1.exe 
%1.exe