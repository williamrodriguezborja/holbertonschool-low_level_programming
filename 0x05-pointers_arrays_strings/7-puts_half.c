#include "holberton.h"
#include <stdio.h>
/**
 * puts_half - print from middle to end
 * @str: characters
 */
void puts_half(char *str)
{
	int length = 0, middle, i;

	while (str[length] != '\0')
		length++;

	if (length % 2 == 0)
		middle = length / 2;
	else
		middle = (length - 1) / 2;

	for (i = middle; i < length ; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
