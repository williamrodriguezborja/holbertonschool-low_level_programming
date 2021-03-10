#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array to cmp
 * @size: size of array
 * @cmp: compare function
 * Return: index
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	/* corner case */
	if (!array || !size || !cmp)
		return (-1);

	for (; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
