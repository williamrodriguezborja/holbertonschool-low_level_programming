#include "holberton.h"
#include <limits.h>
/**
 * print_number - print int characters
 * @n: number to print
 * Return: Always 0.
 */
void print_number(int n)
{
	unsigned int tmp, tens = 1;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	tmp = n;
	if (n == INT_MIN)
		tmp++;

	while (tmp > 9)
	{
		tmp /= 10;
		tens *= 10;
	}
	tmp = n;
	while (tens > 0)
	{
		_putchar('0' + tmp / tens);
		tmp %= tens;
		tens /= 10;
	}
}
