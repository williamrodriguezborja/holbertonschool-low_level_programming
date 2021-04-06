#include "shell.h"

/**
 * _str_copy - copy text to dest
 * @text: text one
 * @dest: destination
 */
void _str_copy(char *text, char *dest)
{
	size_t size;

	if (!text)
		return;
	for (size = 0; text[size]; size++)
		dest[size] = text[size];
}
/**
 * _str_len - find length of string
 * @text: char * to find length
 * Return: size_t
*/
size_t _str_len(char *text)
{
	size_t len;

	if (!text)
		return (0);

	for (len = 0; text[len]; len++)
	{}
	return (len);
}

/**
 * join_path - join str1 '/' str2
 * @str1: path
 * @str2: second part
 * Return: new char*  full path
 */
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
	char **tokens; /* variable to store command and args*/
	char *current_token; /* tmp variable */
	size_t size; 

	size = 0;
	tokens = NULL;
	current_token = NULL;

	tokens = malloc(sizeof(char **) * BUFFER_SIZE);
	if (!tokens)
		return (NULL);
	for (size = 0;; size++)
	{
		current_token = _strtok((size ? NULL : text), delimiter);
		if (!current_token)
			break;
		tokens[size] = current_token;
	}
	return (tokens);
}

/**
 * str_equal - validate if two strings are equals
 * @text: text 1
 * @value_to_compare: text 2
 * Return: 0 or 1 if str is equal
*/
int str_equal(char *text, char *value_to_compare)
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
	return (str_equal(text + 1, value_to_compare + 1));
}

/**
 * str_contain - validate if two strings are equals
 * @text: text 1
 * @value_to_compare: text 2
 * Return: 0 or 1 if str is equal
*/
int str_contain(char *text, char *value_to_compare)
{
	if (!text || !value_to_compare)
		return (0);
	/* edge case finalize both */
	if (!*text || !*value_to_compare)
		return (1);
	/* Base case */
	if (*text != *value_to_compare)
		return (0);
	/*Recursion */
	return (str_contain(text + 1, value_to_compare + 1));
}

