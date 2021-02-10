#include "holberton.h"
#include <stdio.h>
/**
 * print_times_table - print times tables without > 5 or < to 0
 * @n: number of times tables to print
 */
void print_times_table(int n)
{
	if (n > 15 || n < 0)
	{
		_putchar('\n');
		return;
	}
	int i;

	for (i = 0; i <= n ; i++)
	{
		_putchar('\n');
	}
}
