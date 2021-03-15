#include <stdarg.h>
#include "holberton.h"
/**
* print_c - Print a character 
* @a: arguments
*/
void print_c(va_list a)
{
    _putchar(va_arg(a, int));
}
/**
* print_i - Print a integer 
* @a: arguments
*/
void print_i(va_list a)
{
    unsigned int num = va_arg(a, int);

    print_number(num);
}
/**
* print_d - Print a integer 
* @a: arguments
*/
void print_d(va_list a)
{
    unsigned int num = va_arg(a, int);

    print_number(num);
}
/**
* print_c - Print a char *
* @a: arguments
*/
void print_s(va_list a)
{
    int i;
    char * string = va_arg(a, char *);

    if (string == NULL)
    {
        string = "(null)";
    }


    for (i = 0; string[i] != '\0' ; i++)
    {
        _putchar(string[i]);
    }
}
/**
* print_number - Print a char *
* @a: arguments
*/

void print_number(int n)
{
    unsigned int num = n;

    if (n < 0)
    {
        _putchar('-');
        num = -n;
    }
    else
    {
        num = n;
    }
    if (num / 10)
    {
        print_number(num / 10);
    }

    _putchar(num % 10 + '0');
}