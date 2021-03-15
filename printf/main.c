#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

int main()
{
    int alen, elen;
    char c = 'z';
    char *str = NULL;

    // printf("*****CHAR*****\n");
    // printf("=====================\n");
    // elen = printf("1.Actual: %c\n", 'a');
    // alen = _printf("1.Actual: %c\n", 'a');

    // //    printf("1.Expected   : %c\'\n", 'a');
    // //     _printf("1.Actual     : %c\'\n", 'a');

    // printf("3.Expected   : %i\n", elen);
    // printf("3.Actual     : %i\n", alen);

    // printf("4.Expected   : %cc\n", 'a');
    // _printf("4.Actual     : %cc\n", 'a');

    // printf("5.Expected   : %c\n", 53);
    // _printf("5.Actual     : %c\n", 53);

    // printf("6.Expected   : %c.\n", '\0');
    // _printf("6.Actual     : %c.\n", '\0');

    // printf("7.Expected   : %%%c\n", 'y');
    // _printf("7.Actual     : %%%c\n", 'y');

    // printf("8.Expected   : %\n");
    // _printf("8.Actual     : %\n");

    // printf("=====================\n");
    // printf("*****STRINGS*****\n");
    // printf("=====================\n");

    // alen = elen = 0;
    // printf("1. Expected  : %s\n", "holberton");
    // _printf("1.Actual    : %s\n", "holberton");

    // printf("2.Expected   : %s$\n", "");
    // _printf("2.Actual    : %s$\n", "");

    // elen = printf("3.Expected   : %s\n", str);
    // alen = _printf("3. Actual   : %s\n", str);

    // elen = printf("%s", "");
    // alen = _printf("%s", "");
    // // printf("Expected   : %i\n", elen);
    // // printf("Actual     : %i\n", elen);

    int a1 = 123;
    int a2 = 122;

    int a3 = 121;
    int a4 = 55;

    elen = printf("%d%d%d%d holberton\n", a1, a2, a3, a4);
    alen = _printf("%d%d%d%d holberton\n", a1, a2, a3, a4);

    printf("%d\n", elen);
    printf("%d\n", alen);

    // elen = printf("%sschool\n", "holberton");
    // alen = _printf("%sschool\n", "holberton");

    // printf("%d\n", elen);
    // printf("%d\n", alen);

    // elen = printf("Expected: %c%%%c%%%%%s%c%s%s\n", INT_MAX, INT_MIN, "hello", 0, "holberton", 0);
    // alen = _printf("Expected: %c%%%c%%%%%s%c%s%s\n", INT_MAX, INT_MIN, "hello", 0, "holberton", 0);

    // elen = printf("%c%c%s\n", INT_MIN, 0, 0);
    // alen = _printf("%c%c%s\n", INT_MIN, 0, 0);

    // printf("%d\n", elen);
    // printf("%d\n", alen);
    // //                       ->
    //  %c %c  %s %c %s %s

    // �%%%helloholberton(null)

    // Expected:  10
    // %c %% %c %% %% %s %c %s %s \n 10
    // hello : 5
    // holberton: 9

    printf("Expected: %d\n", elen);
    printf("Actual  : %d\n", alen);

    printf("=====================\n");
    printf("*****NUMBERS*****\n");
    printf("=====================\n");

    elen = _printf("sentence.\n");
    alen = printf("sentence.\n");
    _printf("Length:[%d, %i]\n", elen, elen); //10, 10 no cuenta nulo
    printf("Length:[%d, %i]\n", alen, alen);  //10, 10 no cuenta nulo
    elen = _printf("ent:[%%]\n");
    alen = printf("ent:[%%]\n");
    _printf("Len:[%d]\n", elen); // 9
    printf("Len:[%d]\n", alen);  // 8

    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    // _printf("Length:[%d, %i]\n", len, len);
    // printf("Length:[%d, %i]\n", len2, len2);
    // _printf("Negative:[%d]\n", -762534);
    // printf("Negative:[%d]\n", -762534);
    // _printf("Unsigned:[%u]\n", ui);
    // printf("Unsigned:[%u]\n", ui);
    // _printf("Unsigned octal:[%o]\n", ui);
    // printf("Unsigned octal:[%o]\n", ui);
    // _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    // printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    // _printf("Character:[%c]\n", 'H');
    // printf("Character:[%c]\n", 'H');
    _printf("Hello %s , Welcome to the %s!.\n", "Holbies", "Jungle");
    printf("String:[%s]\n", "I am a string !");
    // _printf("Address:[%p]\n", addr);
    // printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");

    len =  _printf("Test q:[%]\n");
    len2 = printf("Test q:[%]\n");

    len =  _printf("Test q:[%q]\n");
    len2 = printf("Test q:[%q]\n");

    len =  _printf("Percent only:[%w]\n");
    len2 = printf("Percent only:[%w]\n");
    // _printf("Len:[%d]\n", len);
    // printf("Len:[%d]\n", len2);
    // _printf("Unknown:[%r]\n");
    // printf("Unknown:[%r]\n");

    return (0);
}

// casos ok
// String
// %
// %%