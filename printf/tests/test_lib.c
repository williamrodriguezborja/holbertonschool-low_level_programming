#include <stdio.h>
#include <stdarg.h>
#include "../holberton.h"
#include "test.h"

int print_test(const char* name, const char* format, ...)
{
    va_list args;
    int length_expec = 0;
    int length_now = 0;
    int is_correct = 1;

    separator_ln();
    printf("||   Name of the Test: \033[34m %s\033[39m\n", name);
    separator_ln();

    va_start(args, format);

    printf("|| * Expected:\n||\tOutput: ");
    length_expec =  printf(format, args);
    printf("\n");
    printf("||\tlength: %d\n", length_expec);

    va_end(args);
    separator_ln();

    va_start(args, format);
    printf("||* Actual:\n");
    printf("||\tOutput:\t");
    length_now =  printf(format, args);
 
    printf("\n");
    printf("||\tlength: %d\n", length_now);
    va_end(args);

    is_correct = length_expec == length_now;
    separator_ln();
    if (is_correct)
        printf("||\033[32m\tTest Ok \033[39m\n");
    else
        printf("||\033[31m\tTest Failure\033[39m\n");
    separator_ln();
    printf("\n\n\n");
    va_end(args);
    return (is_correct);
}