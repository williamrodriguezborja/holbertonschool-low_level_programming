#ifndef _HOLBERTON_H
#define _HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int _printf(const char *format, ...);


typedef struct lista
{
    char type_format;
    void (*f)(va_list);
} print_t;

void print_c(va_list a);
void print_i(va_list a);
void print_d(va_list a);
void print_s(va_list a);
int format_is_correct(char format, char type);



#endif