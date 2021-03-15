#include "../../holberton.h"

int test_char(void)
{
 //   hello();

    int len_expect = 0, len_actual = 0;
    int len_expect = printf("%c\n", 'a');
    int len_actual = _printf("%c\n", 'a');

    int len_expect = printf("%cc\n", 'a');
    int len_actual = _printf("%cc\n", 'a');

    int len_expect = printf("%c\n", 'a');
    int len_actual = _printf("%c\n", 'a');

    int len_expect = printf("%c\n", 53);
    int len_actual = _printf("%c\n", 53);

    int len_expect = printf("%c\n", '\0');
    int len_actual = _printf("%c\n", '\0');

    int len_expect = printf("%%%c\n", 'y');
    int len_actual = _printf("%%%c\n", 'y');

    int len_expect = printf("%");
    int len_actual = _printf("%");
}
