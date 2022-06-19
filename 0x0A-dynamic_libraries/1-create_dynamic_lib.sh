#!/bin/bash

gcc -g -O *.c
gcc *.o -shared -o liball.so
