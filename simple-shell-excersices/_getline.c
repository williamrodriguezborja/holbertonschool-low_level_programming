#include "shell.h"

/**
 * _getline: read stdin and return input of user
 * Return: input of user or return NULL if have error
 */
char *_getline()
{
    char *buffer;
    ssize_t size;
    buffer = malloc(sizeof(*buffer) * BUFFER_SIZE);
    if (!buffer)
        return (NULL);

    size = read(STDIN_FILENO, buffer, BUFFER_SIZE);
    buffer[--size] = '\0';
    return (buffer);
}