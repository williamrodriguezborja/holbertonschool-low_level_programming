#include "shell.h"

/
void _str_copy(char *text, char *dest)
{
	size_t size;

	if (!text)
		return;
	for (size = 0; text[size]; size++)
		dest[size] = text[size];
}

size_t _str_len(char *text)
{
	size_t len;

	if (!text)
		return (0);

	for (len = 0; text[len]; len++)
	{}
	return (len);
}

char *join_path(char *str1, const char *str2)
{
	size_t i, j, size;
	char *total_text;

	size = 0;
	size += _str_len(str1);
	size += _str_len((char *)str2);
	size += 2;
	total_text = malloc(sizeof(char) * size);

	for (i = 0; str1[i]; i++)
		total_text[i] = str1[i];
	total_text[i++] = '/';
	for (j = 0; str2[j]; j++, i++)
		total_text[i] = str2[j];

	total_text[i] = '\0';
	return (total_text);
}

/**
 * split_string - Split text by delimiter
 * @text: text to split
 * @delimiter: array of chars that indicate when end each word
 * Return: char *[] or char** is equivalent. return a array of strings
 */
char **split_string(char *text, const char *delimiter)
{
	char **tokens;
	char *current_token;
	size_t size;

	tokens = malloc(sizeof(char **) * 1024);
	if (!tokens)
		return (NULL);
	for (size = 0;; size++)
	{
		current_token = strtok(size ? NULL : text, delimiter);
		if (!current_token)
			break;
		tokens[size] = current_token;
	}
	return (tokens);
}

/**
 * check_equal
*/
int check_equal(char *text, char *value_to_compare)
{
	if (!text || !value_to_compare)
		return (0);
	/* edge case finalize both */
	if (!*text && !*value_to_compare)
		return (1);
	/* Base case */
	if (*text != *value_to_compare)
		return (0);
	/*Recursion */
	return (check_equal(text + 1, value_to_compare + 1));
}
