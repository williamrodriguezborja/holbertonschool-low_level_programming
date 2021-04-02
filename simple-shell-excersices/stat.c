#include "shell.h"

int main(int argc, char const *argv[])
{
    unsigned int i;
    struct stat st;

    if (stat("/bin/ls", &st) == -1)
        exit(1);

    return 0;
}
