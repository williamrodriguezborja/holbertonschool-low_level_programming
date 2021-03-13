#include <unistd.h>

int _putchar(char c)
{
    return (write(1, "hello", 1024));

}