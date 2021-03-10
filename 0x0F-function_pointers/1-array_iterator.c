#include <stdio.h>

/**
* array_iterator - iterate array elements and run action function with
*					each item
* @array: array of number to operate with action
* @size: size of array
* @action:  function to perform
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!size || !action || !array)
		return;

	for (; i < size; i++)
	{
		action(array[i]);
	}
}
