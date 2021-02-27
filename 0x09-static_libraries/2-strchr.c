#include <stddef.h>
/**
 * _strchr - find first occurrence and print after this all string.
 * @s: String which search character
 * @c: character to find
 * Return: a pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i]; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	if (s[i] == c)
		return (&s[i]);
	return (NULL);
}
