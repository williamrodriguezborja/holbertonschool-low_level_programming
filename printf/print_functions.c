#include <stdarg.h>
#include "holberton.h"
/*
* print_c - Print a character 
* @a: arguments
*/
void print_c(va_list a)
{
    _putchar(va_arg(a, int));
}/*
* print_i - Print a integer 
* @a: arguments
*/
void print_i(va_list a)
{
    _putchar(va_arg(a, int));
}
/*
* print_d - Print a integer 
* @a: arguments
*/
void print_d(va_list a)
{
    _putchar(va_arg(a, int));
}
/*
* print_c - Print a char *  
* @a: arguments
*/
void print_s(va_list a)
{
    int i;
    char * string = va_arg(a, char *);

    for (i = 0; string[i] != '\0' ; i++)
    {
        _putchar(string[i]);
    }
}