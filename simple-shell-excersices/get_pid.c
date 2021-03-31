#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    printf("%d\n", getpid());

    printf("%d\n", getppid());
    printf("%d\n", getppid());
    return (EXIT_SUCCESS);
}