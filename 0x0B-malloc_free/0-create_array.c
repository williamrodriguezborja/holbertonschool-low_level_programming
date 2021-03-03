#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - create new array and fill with c char
 *  @size:  size of the array
 *  @c: char to fill array
 * Return: pointer to array filled
 */
char *create_array(unsigned int size, char c)
{
	char *pointer;
	unsigned int i;

	if (!size)
		return (NULL);
	pointer = malloc(sizeof(char) * size);

	if (pointer == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(pointer + i) = c;
	return (pointer);
}
