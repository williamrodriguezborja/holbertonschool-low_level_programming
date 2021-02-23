#include <stdio.h>
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string to find matches bytes.
 * @accept: bytes to be find.
 * Return: pointer to first occurrence of s in accept if not found NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i])
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
		i++;
	}
	return (NULL);
}
