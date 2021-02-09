#include "holberton.h"

/**
 * main - Print Holberton\n
 * Return: (0) Success
 */
int main(void)
{
	char text[10] = "Holberton\n";
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		_putchar(text[i]);
	}
	return (0);
}
