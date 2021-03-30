#include "holberton.h"
/**
 * read_text - text
 * @buffer: buffer
 * @name: filename
 * @size: size
 */
void read_text(char *buffer, const char *name, size_t size)
{
	int file_d;

	file_d = open(name, O_RDONLY);
	if (file_d == -1 || !name)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", name);
		exit(98);
	}
	read(file_d, buffer, size);
	close(file_d);
}
/**
 * write_text - text
 * @buffer: buffer
 * @name: filename
 * @size: size
 */
void write_text(char *buffer, const char *name, size_t size)
{
	int file_d;

	file_d = open(name, O_TRUNC | O_CREAT | O_WRONLY, S_IRUSR |
	S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_d == -1 || !name)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", name);
		exit(98);
	}
	if (write(file_d, buffer, size) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", name);
		exit(99);
	}
	if (close(file_d) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_d);
		exit(100);
	}
}
/**
 * main - copy files
 * @argc: counter
 * @argv: argas
 * Return: success
 */
int main(int argc, char const *argv[])
{
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	read_text(buffer, argv[1], 1024);
	write_text(buffer, argv[2], 1024);
	dprintf(STDOUT_FILENO, "%s\n", buffer);
	return (0);
}
