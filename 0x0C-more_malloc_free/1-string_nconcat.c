#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_len - calculate length of a s1
 * @str: string to calculate length
 * Return: length unsigned int
*/
unsigned int str_len(char *str)
{
	unsigned int len = 0;

	if (str) /* get length of two strings*/
	{
		for (; str[len]; len++)
		{}
	}
	return (len);
}
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
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0, size = 0;

	if (!s1 && !s2) /* edge case any s is null*/
	{
		str = malloc(sizeof(char));
		if (!str)
			return (NULL);
		*str = '\0';
		return (str);
	}

	len1 = str_len(s1);
	len2 = str_len(s2);

	if (n < len2)
		len2 = n;
	size = (len1 + len2);

       /* reserve this space based of lengths*/
	str = malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);

	for (; i < size || j < len2; i++) /* fill new string */
	{
		if (i < len1) /* if copy first string */
			str[i] = s1[i];
		else if (s2) /* else fill second s2 in new string*/
		{
			str[i] = s2[j];
			j++;
		}
	}
	str[i] = '\0'; /*add end*/
	return (str);
}
