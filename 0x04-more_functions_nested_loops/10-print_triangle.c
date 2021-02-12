#include "holberton.h"
/**
 * print_triangle - print triangule;
 * @size: how is big a triangule
 */
void print_triangle(int size)
{
	if (size < 1)
		_putchar('\n');
	else
	{
		int i, j, spaces = size - 1;

		for (i = 0; i < size; i++)
		{
			spaces--;
			for (j = 0; j < size; j++)
			{
				if (j <= spaces)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
