#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string to find matches bytes.
 * @accept: bytes to be find.
 * Return: pointer to first occurrence of s in accept if not found NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	for (; s[i]; i++)
	{
		j = 0;
		for (; accept[j] == s[i] && accept[i]; j++, i++)
		{
		}

		if (accept[j] == '\0')
		{
			i -= j;
			return (&s[i]);
		}
	}
	return (NULL);
}