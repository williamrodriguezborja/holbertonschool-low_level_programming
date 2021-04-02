#include "shell.h"

void handler()
{
    fflush(stdout);
}

int main()
{
    
    signal(SIGCLD, handler);
    while (1)
    {
        printf("test\n");
        sleep(2);
    }
    return 0;
}
