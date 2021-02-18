#include "holberton.h"

/**
 * puts2 - print even index
 * @str: pointer to first char to string array
 */
void puts2(char *str)
{
	long i;

	for (i = 0; str[i]; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
