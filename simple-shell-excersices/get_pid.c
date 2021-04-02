#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    printf("%d\n", getpid());
    printf("%d\n", getppid());
    while (1)
    {

    }
    return (EXIT_SUCCESS);
}