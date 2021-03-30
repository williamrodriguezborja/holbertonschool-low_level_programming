#include "holberton.h"
#include <fcntl.h>
#include <unistd.h>
/**
 * error - manage errors
 * @exit_n: buffer
 * @filename: filename
 * @fd: file descriptor
 */
void error(int exit_n, const char *filename, int fd)
{
	if (exit_n == 97)
		dprintf(STDERR_FILENO, MSG_ERROR_97);
	else if (exit_n == 98)
		dprintf(STDERR_FILENO, MSG_ERROR_98, filename);
	else if (exit_n == 99)
		dprintf(STDERR_FILENO, MSG_ERROR_99, filename);
	else
		dprintf(STDERR_FILENO, MSG_ERROR_100, fd);
	exit(exit_n);
}
/**
 * read_text - Read text and return characters size
 * @file_d: file descriptor
 * @buffer: buffer
 * @filename: filename
 * Return: size of chars
 */
ssize_t read_text(int file_d, char *buffer, const char *filename)
{
	ssize_t read_size;

	if (file_d == -1)
		error(98, filename, 0);
	read_size = read(file_d, buffer, BUFFER_SIZE);
	if (read_size == -1)
		error(98, filename, 0);
	return (read_size);
}
/**
 * write_text - text
 * @file_d: file descriptor
 * @buffer: buffer
 * @filename: filename
 * @size: size
 */
void write_text(int file_d, char *buffer, const char *filename, ssize_t size)
{
	if (file_d == -1 || !filename)
		error(99, filename, 0);
	if ((write(file_d, buffer, size)) == -1)
		error(99, filename, 0);
}
/**
 * main - copy files
 * @argc: counter
 * @argv: argv
 * Return: success
 */
int main(int argc, char const *argv[])
{
	char buffer[BUFFER_SIZE];
	ssize_t read_size;
	int file_d_read, file_d_write;
	const char *file_from, *file_to;

	if (argc != 3)
		error(97, NULL, 0);
	file_from = argv[1];
	file_to = argv[2];
	file_d_read = open(file_from, O_RDONLY);
	file_d_write = open(file_to, O_TRUNC | O_CREAT | O_WRONLY, WRITE_READ);
	while ((read_size = read_text(file_d_read, buffer, file_from)) != 0)
	{
		if (read_size < 1024)
			buffer[read_size + 1] = '\0';
		write_text(file_d_write, buffer, argv[2], read_size);
	}
	if (close(file_d_read) == -1)
		error(100, NULL, file_d_read);

	if (close(file_d_write) == -1)
		error(100, NULL, file_d_write);
	return (0);
}
