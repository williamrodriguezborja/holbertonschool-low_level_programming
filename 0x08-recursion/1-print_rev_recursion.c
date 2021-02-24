#include "holberton.h"

/**
 * _print_rev_recursion - reverse string print
 * @s: print s string reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);

}
