#include "holberton.h"
#include <stdarg.h>
#include "holberton.h"
#include <stdarg.h>

int _printf(const char * const format, ...)
{
    va_list lista;
    int i = 0, j = 0, count = 0;
    print_t print_type[] = {
        {'c', print_c}, {'s', print_s}, {'i', print_i}, {'d', print_d}, {'\0', NULL}
    };
    va_start(lista, format);
    while (format != NULL && format[i] != '\0')
    {
        if (format[i] == '%' && format[i+1] == '%') //%% == %
        {
            _putchar(format[i]);
            i += 2;
            count++;
            continue;
        }
        if (format_is_correct(format[i], format[i + 1])) // %d  %i  %c || %s == True
        {
            for (j = 0; print_type[j].type_format != '\0'; j++) //
            {
                if (format[i + 1] == print_type[j].type_format)
                {
                    count = count + print_type[j].f(lista);
                    i++;
                    break;
                }
            }
        }
        else
        {
            _putchar(format[i]);
            count++; // cuando el sale de la comprobacion de %d <<<<< el ingresa a este contador
        }
        i++; //
    }
    return (count); //longitud
}