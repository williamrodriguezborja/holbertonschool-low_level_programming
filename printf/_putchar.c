#include <unistd.h>

int _putchar(char c)
{
    char buffer[2048] = {c, '\0'}; // 
    return (write(1, buffer, 2048));
}