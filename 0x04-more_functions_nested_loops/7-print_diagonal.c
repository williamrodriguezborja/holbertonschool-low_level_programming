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

        for (i = 0; i <= n -1 ; i++)
        {
                for (j = 0; j <= i; j++)
                {
			_putchar(' ');
                        if (j == i )
                                _putchar('\\');
                 }
                _putchar('\n');
        }
}
