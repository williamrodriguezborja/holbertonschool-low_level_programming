#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - if have error throw 98 error
 * @b: bytes
 * Return: pointer void
*/
void *malloc_checked(unsigned int b)
{
	void *point;

	point = malloc(b);
	if (!point)
		exit(98);
	return (point);
}
