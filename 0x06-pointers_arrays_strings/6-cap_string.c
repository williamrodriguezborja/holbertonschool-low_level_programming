#include "holberton.h"
#include <stdio.h>
/**
 * string_toupper - transform text to uppercase
 * @s: text to transform to uppercase
 * Return: char*
 */
char *string_toupper(char *s)
{
	if (*s >= 97 && *s <= 123)
		*s -= 32;
	return (s);
}

/**
 * cap_string - Transform first Letter to Uppercase
 * @s: string to transform
 * Return: char
 */
char *cap_string(char *s)
{
	char *separators = " ,;.!?(){}\t\n\"";
	int i = 0 , j;

	int is_first_letter, is_before_separator;

	for (; s[i] ; i++)
	{
		/* first letter */
		is_first_letter = i == 0;
		/* before char is space or separator  convert to uppercase*/

		j=0;
		is_before_separator = 0;

		while (separators[j] && !is_before_separator)
		{
			is_before_separator = s[i - 1] == separators[j];
			j++;
		}
		/* need change to uppercase */
		if (is_first_letter || is_before_separator)
			string_toupper(&s[i]);

		/* else lower case */
		/* else if (s[i] >= 65 && s[i] <= 90) */
		/* 	s[i] += 32; */
	}
	return (s);
}
