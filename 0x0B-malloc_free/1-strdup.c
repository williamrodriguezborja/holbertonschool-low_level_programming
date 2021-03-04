#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - This function copy string to new str created with malloc
 * @str: string
 * Return: Pointer to new string
 */
char *_strdup(char *str)
{
	char *new_string;
	int i = 0, length = 0;

	/* edge case */
	if (str == NULL)
		return (NULL);

	/* 1. search length to know many memory need*/

	for (; str[length]; length++)
	{}

	/* 2. reserve memory needed*/

	new_string = malloc(sizeof(char) * (length + 1));

	if (!new_string)
		return (NULL);

	/* 3. fill new string with data of old string */

	for (; i < length; i++)
		new_string[i] = str[i];

	new_string[i] = '\0';

	/* 4. return new string */
	return (new_string);
}
