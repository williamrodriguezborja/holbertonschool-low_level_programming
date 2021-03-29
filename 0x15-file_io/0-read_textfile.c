#include "holberton.h"
/**
 * read_textfile - Read file and return letter size
 * @filename: name of file
 * @letters: size of buffer
 * Return: size of characters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	char buffer[letters];
	ssize_t size;

	if (!filename || !letters) /*edge cases*/
		return (0);
	file_d = open(filename, O_RDONLY);

	if (file_d == -1) /* file descriptor error*/
		exit(EXIT_FAILURE);

	size = read(file_d, buffer, letters); /* read file*/
	printf("%s", buffer);                 /*print content*/
	close(file_d);                        /* close file descriptor */
	return (size);                        /*read funcition return ssize_t*/
}
