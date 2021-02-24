#include "holberton.h"

/**
 *  print_chessboard - print chess;
 * @a: pointer to array data
 */
void print_chessboard(char (*a)[8])
{

	int i = 0, j;


	for (; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);

			if (j == 7)
				_putchar('\n');
		}
	}
}
