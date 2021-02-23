#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char buffer[98] = {0x00};

	/* simple_print_buffer(buffer, 98); */
	/* _memset(buffer, 0x20, 16); */
	/* printf("-------------------------------------------------\n"); */
	/* simple_print_buffer(buffer, 98); */
        simple_print_buffer(buffer, 20);
	memset(buffer, 0x20, 16);
	printf("-------------------------------------------------\n");
	simple_print_buffer(buffer, 20);
	return (0);
}
