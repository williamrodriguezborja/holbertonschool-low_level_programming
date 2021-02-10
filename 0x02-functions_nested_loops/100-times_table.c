#include "holberton.h"
#include <stdio.h>
/**
 * print_times_table - print times tables without > 5 or < to 0
 * @n: number of times tables to print
 */
void print_times_table(int n)
{
	int i;

	for (i = 0; i <= n ; i++)
	{
		int j;

		for (j = 0 ; j <= n ; j++)
		{
			int time = i * j;

			if (i > 0 && j <= n)
			{
				_putchar(',');
				_putchar(' ');
				if (time <= 99)
					_putchar(' ');
				if (time <= 9)
					_putchar(' ');

			}
			print_num(time);
		}
		_putchar('\n');
	}
}
