#include "holberton.h"
#include <stdio.h>
/**
 * print_number - print int characters
 * @n: number to print
 * Return: Always 0.
 */
void print_number(int n)
{
	int digits = 0, tmp, tens = 1, first;

	if (n < 0)
	{
		n = -n;
		tmp = n;
		_putchar('-');
	}
	if (n == 0)
		_putchar('0');
	else
	{
		tmp = n;
		while (tmp)
		{
			tmp /= 10;
			if (digits >= 1)
				tens *= 10;
			digits++;
		}
		tmp = n;
		while (digits > 0)
		{
			first = tmp / tens;
			tmp -= tens * first;
			_putchar('0' + first);
			if (tmp < tens / 10)
			{
				_putchar('0');
				digits -= 2;
				tens /= 100;
			}
			else
			{
				tens /= 10;
				digits--;
			}
		}
	}
}
