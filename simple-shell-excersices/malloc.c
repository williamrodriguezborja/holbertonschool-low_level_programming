#include "shell.h"

/**
* malloc_string - manage malloc for a new string and copy text in this
* @text: text to create copy
* Return: char *new array
*/
char *malloc_string(char *text)
{
	size_t size;
	char *new_text;

	size = _str_len(text);

	new_text = malloc(sizeof(char *) * size);

	if (!new_text)
		return (NULL);

	_str_copy(text, new_text);

	return (new_text);
}
