#ifndef _HOLBERTON_H
#define _HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int print_all(const char *format, ...);


typedef struct lista
{
    char type_esp;
    char type_format;
    void (*f)(va_list);
} print_t;

void print_c(va_list a);
void print_i(va_list a);
void print_d(va_list a);
void print_s(va_list a);



#endif