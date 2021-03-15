#include "../../holberton.h"
#include "../test.h"

int main(void)
{
    int length_expec = 0 , length_now = 0, is_correct;
    separator_ln();
    printf("||   Name of the Test: \033[34m %s\033[39m\n", "Test One Char");
    separator_ln();

    printf("|| * Expected:\n||\tOutput: ");
    length_expec = printf("%c", 'a');
    printf("\n");
    printf("||\tlength: %d\n", length_expec);

    separator_ln();

    printf("||* Actual:\n");
    printf("||\tOutput:\t");
    length_now = printf("%c", 'a');

    printf("\n");
    printf("||\tlength: %d\n", length_now);

    is_correct = length_expec == length_now;
    separator_ln();
    if (is_correct)
        printf("||\033[32m\tTest Ok \033[39m\n");
    else
        printf("||\033[31m\tTest Failure\033[39m\n");
    separator_ln();
    printf("\n\n\n");
    
    return (is_correct);
}
