#include "holberton.h"
/**
 * append_text_to_file - Create a new file if not exist or append your content
 * @filename: name of file
 * @text_content: Content
 * Return: size of characters
 */
int append_text_to_file(const char *filename, char *text_content)
{
	size_t size;
	int file_d = 0;

	if (!filename)
		return (-1);

	file_d = open(filename, O_APPEND | O_WRONLY, 0600);
	if (file_d == -1)
		return (file_d);

	for (size = 0; text_content && text_content[size]; size++)
	{}

	if (write(file_d, text_content, size) == -1)
		return (-1);
	close(file_d);
	return (1);
}
