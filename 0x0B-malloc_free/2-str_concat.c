#include "holberton.h"
/**
* str_concat - concatenate two strings and return new string
* @s1: first string
* @s2: second string
* Return: pointer to char concatenated
*/
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i = 0, j = 0, len1 = 0, len2 = 0, size = 0;

	/* edge case any s is null*/
	if (!s1 || !s2)
		return (str);

	/* get length of two strings*/
	for (; s1[len1]; len1++)
	{}

	for (; s2[len2]; len2++)
	{}

	size = len1 + len2 + 1;

	/* reserve this space based of lengths*/
	str = malloc(sizeof(char) * size);

	if (!str)
		return (NULL);

	for (; i < size; i++) /* fill new string */
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
