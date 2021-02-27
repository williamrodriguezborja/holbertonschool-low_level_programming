#include <stdio.h>
/**
 * _strstr - find substring in string
 * @haystack: where find
 * @needle: to find
 * Return: start first match
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	for (; haystack[i]; i++)
	{
		for (j = 0; needle[i] && haystack[i + j] == needle[j]; j++)
		{
		}

		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (NULL);
}
