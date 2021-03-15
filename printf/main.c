#include <limits.h>
#include <stdio.h>
#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    int len_string_printf;
    int len_string_mine;
    len_string_printf = printf("Hola %s, como estas\n", "string"); // el porcentaje se expande y no lo cuenta, pero cuenta la expansion
    len_string_mine = _printf("Hola %s, como estas\n", "string");
    printf("%d\n", len_string_printf);
    _printf("%d\n", len_string_mine);
    len_string_printf = printf("%s\n", "string"); //el porcentaje se expande y no lo cuenta, pero cuenta la expansion
    len_string_mine = _printf("%s\n", "string");
    printf("%d\n", len_string_printf);
    _printf("%d\n", len_string_mine);
    len_string_printf = printf("%%\n"); //cuenta el salto de linea y un porcentaje
    len_string_mine = _printf("%%\n");
    printf("%d\n", len_string_printf);
    _printf("%d\n", len_string_mine);
    int alen, elen;
    char c = 'z';
    char *str = NULL;
    printf("START OF TEST\n");
    printf("=====================\n");
    printf("printf(NULL)  : %d\n", printf(str));
    printf("_printf(NULL) : %d\n", _printf(str));
    printf("printf(\"%\") : %d\n", printf("%"));
    printf("_printf(\"%\"): %d\n", _printf("%"));
    str = "hello, world";
    printf("=====================\n");
    printf("*****CHAR*****\n");
    printf("=====================\n");
    printf("Expected   : %c\n", 'a'); // se expande <<<<<
    _printf("Actual     : %c\n", 'a');
    elen = printf("Expected   : %c\n", c); // se expande <<<<<<
    alen = _printf("Actual     : %c\n", c);
    printf("Expected   : %i\n", elen);
    printf("Actual     : %i\n", alen);
    printf("Expected   : %cc\n", 'a');
    _printf("Actual     : %cc\n", 'a');
    printf("Expected   : %c\n", 53);
    _printf("Actual     : %c\n", 53);
    printf("Expected   : %c.\n", '\0');
    _printf("Actual     : %c.\n", '\0');
    printf("Expected   : %%%c\n", 'y');
    _printf("Actual     : %%%c\n", 'y');
    printf("Expected   : %\n");
    _printf("Actual     : %\n");
    printf("=====================\n");
    printf("*****STRINGS*****\n");
    printf("=====================\n");
    alen = elen = 0;
    printf("Expected   : %s\n", "holberton");
    _printf("Actual     : %s\n", "holberton");
    printf("Expected   : %s$\n", "");
    _printf("Actual     : %s$\n", "");
    elen = printf("Expected   : %s\n", str);
    alen = _printf("Actual     : %s\n", str);
    elen = printf("%s", "");
    alen = _printf("%s", "");
    printf("Expected   : %i\n", elen);
    printf("Actual     : %i\n", elen);
    printf("Expected   : %sschool\n", "holberton");
    _printf("Actual     : %sschool\n", "holberton");
    elen = printf("Expected: %c%%%c%%%%%s%c%s%s\n", INT_MAX, INT_MIN, "hello", 0, "holberton", 0);
    alen = _printf("Expected: %c%%%c%%%%%s%c%s%s\n", INT_MAX, INT_MIN, "hello", 0, "holberton", 0);
    printf("Expected: %d\n", elen);
    printf("Actual  : %d\n", alen);
    printf("Hola como estas%wcomoestas\n");
    _printf("Hola como estas%wcomoestas\n");
    printf("Hola como estas%qomoestas\n");
    _printf("Hola como estas%qomoestas\n");
    return (0);
}