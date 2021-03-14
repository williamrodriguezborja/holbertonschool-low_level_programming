#include "holberton.h"
#include <stdarg.h>

int _printf(const char * const format, ...)
{
    va_list lista;

    print_t print_type[] = {
        {'c', print_c}, //{[0].f [0].type_format}
        {'s', print_s}, //{[1].f [1].type_format}
        {'i', print_i},
        {'d', print_d},
        {'\0', NULL}
    };

    int i = 0, j = 0;

    va_start(lista, format);

    while (format != NULL && format[i] != '\0')
    {
        if (format[i] == '%' && format[i+1] == '%') //%% == %
        {
            _putchar(format[i]);
            i += 2;
            continue;
        }
        if (format_is_correct(format[i], format[i + 1])) // %d || %i || %c || %s == True
        {
            while (print_type[j].type_format != '\0') //     
            {
                if (format[i + 1] == print_type[j].type_format)
                {
                    print_type[j].f(lista);
                    i++;
                    break;
                }
                j++;
            }
            j = 0;
            
        }
        else
            _putchar(format[i]);
        i++;
    }
    return (i); //longitud
}
