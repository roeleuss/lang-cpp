#!/bin/sh
g++ -c $1.cpp -o $1.ol
g++ -S $1.cpp -o $1.sl
g++ -o $1.bin $1.ol
strip --strip-unneeded $1.bin 
./$1.bin