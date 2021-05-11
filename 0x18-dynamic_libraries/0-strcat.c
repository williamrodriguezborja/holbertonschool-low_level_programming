#include "holberton.h"
#include <stdio.h>
/**
 * _strcat - concat strs
 * @dest: result of concat
 * @src: strint to concat to first
 * Return: concat String
 */
char *_strcat(char *dest, char *src)
{
	int length = 0, i;

	while (dest[length])
		length++;

	for (i = 0; src[i]; i++, length++)
		dest[length] = src[i];
	dest[length] = 0;
	return (dest);
}
