#include <stdio.h>
/**
 * _strlen - return lenght a number;
 * @s: string to print length char
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != 0)
		i++;
	return (i);
}
