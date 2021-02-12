#include "holberton.h"
/**
 * print_square - print a square in base to n columns and rows
 * @size: n is columns a rows number
 */
void print_square(int size)
{
	if (size == 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}

	}
}
