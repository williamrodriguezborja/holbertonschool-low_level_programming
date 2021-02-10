#include "holberton.h"
#include <stdio.h>
/**
 * print_num - int convert to char * and print these
 * @n: number to print
 */
void print_num(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	int tmp = n;
	int digits = 0;

	while (tmp)
	{
		tmp /= 10;
		digits++;
	}

	char numbers[digits];
	int i = digits - 1;

	tmp = n;

	while (i >= 0)
	{
		numbers[i] = (tmp % 10);
		tmp /= 10;
		i--;
	}

	for (i = 0; i < digits  ; i++)
		_putchar('0' + numbers[i]);
}
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

			if (j > 0 && j <= n)
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
