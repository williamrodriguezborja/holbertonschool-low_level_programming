#include <stdarg.h>
#include "holberton.h"
#include <stdarg.h>
#include "holberton.h"
/**
* print_c - Print a character
* @a: arguments
*/
int print_c(va_list a)
{
    _putchar(va_arg(a, int));
    return 1;
}
/**
* print_i - Print a integer
* @a: arguments
*/
int print_i(va_list a)
{
    unsigned int num = va_arg(a, int);
    print_number(num);
    return 0;
}
/**
* print_d - Print a integer
* @a: arguments
*/
int print_d(va_list a)
{
    unsigned int num = va_arg(a, int);
    print_number(num);
    return 0;
}
/**
* print_c - Print a char *
* @a: arguments
*/
int print_s(va_list a)
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
    return i;
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
/**
 * @brief 
 * 
 * @param n 
 * @return int 
 */
int print_hex(int n)
{
    char hex[100];
    int i = 0, temp = 0;

    for (; n; i++, n /= 16)
    {
        temp %= 16;

        if (temp < 10)
            hex[i] = temp + 48; 
        else
            hex[i] = temp + 55;
    }

    for (i = 0; hex[i] != '\0'; i++)
        _putchar(hex[i]);
    
    return (i);
}