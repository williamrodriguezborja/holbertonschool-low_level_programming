#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* string_nconcat - concatenate two strings and return new string
* @s1: first string
* @s2: second string
* @n: number of chars
* Return: pointer to char concatenated
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, j = 0, len1 = 0, size = 0;

	if (!s1 && !s2) /* edge case any s is null*/
		return (malloc(sizeof(char)));

	if (s1) /* get length of two strings*/
	{
		for (; s1[len1]; len1++)
		{}
	}

	size = len1 + n;

	/* reserve this space based of lengths*/
	str = malloc(sizeof(char) * size + 1);

	if (!str)
		return (NULL);

	for (; i < size || i < n; i++) /* fill new string */
	{
		if (i < len1) /* if copy first string */
			str[i] = s1[i];
		else /* else fill second s2 in new string*/
		{
			str[i] = s2[j];
			j++;
		}
	}

	str[i] = '\0'; /*add end*/
	return (str);
}
