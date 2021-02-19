#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - Transform first Letter to Uppercase
 * @s: string to transform
 * Return: char
 */
char *cap_string(char *s)
{
	/* char *separators = ",;.!?\"(){}"; */
	int i = 0;

	for (; s[i] ; i++)
	{
		if (s[i] == ' ' && (s[i + 1] >= 97 && s[i + 1] <= 122))
			s[i + 1] -= 32;
	}
	return (s);
}
