#include "holberton.h"
#include <stdarg.h>

int print_all(const char * const format, ...)
{
    va_list lista;
    print_t print_type[] = {
        {'%', 'c', print_c},
        {'%', 's', print_i},
        {'%', 'i', print_d},
        {'%', 'd', print_s},
        {'\0', '\0', NULL}
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
        if (format[i] == '%') //%d %c %i %
        {
            while (print_type[j].type_esp != '\0')
            {
                if (format[i] == print_type[j].type_esp)
                {
                    print_type[j].f(lista);
                }
                j++;
            }
            j = 0;

        }
		i++;
        _putchar(format[i]);
    }
}

void print_c(va_list a)
{

}
void print_i(va_list a)
{

}

void print_d(va_list a)
{

}

void print_s(va_list a)
{

}