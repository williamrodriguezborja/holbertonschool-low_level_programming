#ifndef _HOLBERTON_H
#define _HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int _printf(const char *format, ...);

typedef struct lista
{
    char type_format;
    int (*f)(va_list);
} print_t;

int print_c(va_list a);
int print_i(va_list a);
int print_d(va_list a);
int print_s(va_list a);
int print_hex(int n);
int format_is_correct(char format, char type);
void print_number(int n);

#endif