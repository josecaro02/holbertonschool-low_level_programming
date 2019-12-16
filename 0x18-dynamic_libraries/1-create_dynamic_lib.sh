#!/bin/sh
gcc -fPIC -c *.c
gcc -shared -o liball.so *.o
