#include "holberton.h"

/**
* print_binary - print a unsigned int in binary format
* @binary: pointer to strig
* Return: Binary.
*/
void print_binary(unsigned long int n)
{
	size_t size;
	if (n < 2)
	{
		_putchar(n + '0');
		return;
	}

	for (size = 0; ; size++)
	{

	}
	printf("%lu", n << 1);
}
