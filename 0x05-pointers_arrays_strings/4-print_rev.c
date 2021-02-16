#include "holberton.h"
/**
 * print_rev - print string in reverse order
 * @s: char *
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != 0)
		i++;

	while(i)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
