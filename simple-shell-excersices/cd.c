#include "shell.h"


int main(int argc, char *argv[], char *envp[])
{
    
    if (execve("/usr/bin/env'", argv, envp) == -1)
			perror("Error");

    return 0;
}
