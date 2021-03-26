#include "holberton.h"

/**
* binary_to_uint - transform string binary to  unsigned int.
* @binary: pointer to strig
* Return: Binary.
*/
unsigned int binary_to_uint(const char *binary)
{
	unsigned int number, i;

	if (!binary)
		return (0);

	for (i = 0, number = 0; binary[i]; i++)
	{
		number <<= 1;
		if (binary[i] != '0' && binary[i] != '1')
			return (0);
		number |= (binary[i] - '0');
	}
	return (number);
}
