#include "holberton.h"
/**
 * print_char_num - print number with three decimals
 * @n: number to print with character
 */
void print_char_num(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n >= 10 && n < 100)
	{
		_putchar('0' + (n / 10));
		_putchar('0' + (n % 10));
	}
	else if (n >= 100)
	{
		_putchar('0' + (n / 100));
		_putchar('0' + (n / 10) / 10);
		_putchar('0' + (n % 10));
	}
	else
	{
		_putchar('0' + n);
	}
}
/**
 * print_to_98 - print all numbers to 98
 * @n: numbers to start
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		print_char_num(n);
	}
	else if (n < 98)
	{
		int i;

		for (i = n ; i <= 98; i++)
		{
			print_char_num(i);
			if (i < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		int i;

		for (i = n ; i >= 98; i--)
		{
			print_char_num(i);
			if (i > 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
