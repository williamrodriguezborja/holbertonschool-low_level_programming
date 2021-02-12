#include "holberton.h"
/**
 * print_diagonal - show diagonal with \ character
 * @n: number of lines in diagonal
 */
void print_diagonal(int n)
{
	int i, j;

	if (n < 1)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n ; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j != 0 && i != 0)
				_putchar(' ');
			if (j == i)
				_putchar('\\');
		}
		_putchar('\n');
	}
}
