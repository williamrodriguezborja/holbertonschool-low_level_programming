cp     ../0x04-more_functions_nested_loops/0-isupper.c \
       ../0x07-pointers_arrays_strings/0-memset.c \
       ../0x06-pointers_arrays_strings/0-strcat.c \
       ../0x04-more_functions_nested_loops/1-isdigit.c \
       ../0x07-pointers_arrays_strings/1-memcpy.c \
       ../0x06-pointers_arrays_strings/1-strncat.c \
       ../0x05-pointers_arrays_strings/100-atoi.c \
       ../0x07-pointers_arrays_strings/2-strchr.c \
       ../0x05-pointers_arrays_strings/2-strlen.c \
       ../0x06-pointers_arrays_strings/2-strncpy.c \
       ../0x02-functions_nested_loops/3-islower.c \
       ../0x05-pointers_arrays_strings/3-puts.c \
       ../0x06-pointers_arrays_strings/3-strcmp.c \
       ../0x07-pointers_arrays_strings/3-strspn.c \
       ../0x02-functions_nested_loops/4-isalpha.c \
       ../0x07-pointers_arrays_strings/4-strpbrk.c \
       ../0x07-pointers_arrays_strings/5-strstr.c \
       ../0x02-functions_nested_loops/6-abs.c \
       ../0x05-pointers_arrays_strings/9-strcpy.c \
       ../0x08-recursion/_putchar.c \
       ../0x09-static_libraries/holberton.h \
       .

gcc -fPIC -Wall -Werror -Wextra -pedantic -c *.c
gcc *.o -shared -o libholberton.so

ls -la lib*
nm -D libholberton.so

gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -lholberton -o len

export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH

ldd len
rm *.o
