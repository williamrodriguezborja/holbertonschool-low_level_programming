#!/bin/bash
gcc -fPIC -Wall -Werror -Wextra -pedantic -c 100-operations.c
gcc 100-operations.o -shared -o 100-operations.so

nm -D 100-operations.so
#export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
rm *.o
