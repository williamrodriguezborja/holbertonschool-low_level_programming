#include "holberton.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: is the width
 * @height: is the height
 * Return: Always 0.
 */
int **alloc_grid(int width, int height)
{
	int **grid, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height); /* tomamos la altura primero */

	if (!grid)
		return (NULL);


	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width); /* obtenemos el ancho */

		if (grid[i] == NULL)
		{
			for (; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}
