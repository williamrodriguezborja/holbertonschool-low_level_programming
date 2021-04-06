#include "shell.h"

/**
 * _getline - read stdin and return input of user
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
	if (!size)
	{
		write(STDOUT_FILENO, "\n", 1);
		exit(0);
	}
		
	buffer[--size] = '\0'; /* replace \n to \0 */
	return (buffer);
}
