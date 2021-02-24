#include <stdio.h>

/**
 * print_diagsums - print sum of two diagonals in matrice
 * @a: array 2d
 * @size: length of the array
 */
void print_diagsums(int *a, int size)
{
	int sumDiagonalOne = 0;
	int sumDiagonalTwo = 0;

	int i = 0;
	int j = 0;
	int k = 0;

	for (; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sumDiagonalOne += a[k];
			}

			if ((i + j) == size - 1)
			{
				sumDiagonalTwo += a[k];
			}
			k++;
		}
	}
	printf("%d, ", sumDiagonalOne);
	printf("%d\n", sumDiagonalTwo);
}
