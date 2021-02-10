#include "holberton.h"
#include <stdio.h>
/**
 * print_times_table - print times tables without > 5 or < to 0
 * @n: number of times tables to print
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n ; j++)
		{
			product = i * j;

			if (j > 0 && j <= n)
			{
				_putchar(',');
				_putchar(' ');
				if (product <= 99)
					_putchar(' ');
				if (product <= 9)
					_putchar(' ');
			}
			if (product > 99)
			{
				_putchar('0' + product / 100);
				product %= 100;
				if (product < 10)
					_putchar('0');
			}
			if (product > 9)
				_putchar('0' + product / 10);
			_putchar('0' + product % 10);
		}
		_putchar('\n');
	}
}
