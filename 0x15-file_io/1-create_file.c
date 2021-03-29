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
	int file_d = 0 ;

	if (!filename)
		return (-1);

	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_d == -1)
		return (file_d);

	for (size = 0; text_content && text_content[size]; size++)
	{}

	if (write(file_d, text_content, size) == -1)
		return (-1);

	close(file_d);
	return (1); 
}
