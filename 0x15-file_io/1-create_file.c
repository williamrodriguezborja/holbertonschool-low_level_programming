#include "holberton.h"
/**
 * create_file - Create a new file if not exist and fill with content
 * @filename: name of file
 * @text_content: Content
 * Return: size of characters
 */
int create_file(const char *filename, char *text_content)
{
	size_t size;
	int file_d;

	if (!filename)
		return (0);

	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	size = 0;

	if (file_d == -1)
		return (file_d);

	for (;text_content[size] ;size++)
	{}

	write(file_d, text_content, size);
	return (1); /*read funcition return ssize_t*/
}
