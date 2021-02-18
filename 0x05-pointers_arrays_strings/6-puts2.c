#include "holberton.h"

/**
 * puts2 - print even index
 * @str: pointer to first char to string array
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if ( (i % 2) == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
