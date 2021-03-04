#include "holberton.h"

/**
 * free_grid - returns a pointer to a 2 dimensional array of integers.
 * @grid: grid pointer to pointer
 * @height: is the height
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(*(grid + i));

	free(grid);
}
