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

    int i = 0, j = 0, count = 0;

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
            while (print_type[j].type_format != '\0') //
            {
                if (format[i + 1] == print_type[j].type_format)
                {
                    print_type[j].f(lista);
                    i++;
                    //count++;
                    break;
                }
                j++;
            }
            j = 0;
        }
        else if (format[i] == '%')
        {
            _putchar(format[i]); //

            if ((int)format[i + 1]  == '\n')
            {
                _putchar(format[i + 1]); //
                i += 2;

            }else
                i++;
            continue;
        }
        else
        {
            _putchar(format[i]);
        }
        count++;
        i++; //
    }

    return (count); //longitud
}