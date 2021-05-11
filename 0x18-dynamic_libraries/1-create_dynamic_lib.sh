#!/bin/bash
gcc -fPIC -Wall -Werror -Wextra -pedantic -c *.c
gcc *.c -c -fPIC
gcc *.o -shared -o liball.so

ls -la lib*
nm -D liball.so
rm *.o
