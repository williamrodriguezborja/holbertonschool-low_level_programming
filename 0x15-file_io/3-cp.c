#include "holberton.h"
/**
 * main - copy files
 * @argc: counter
 * @argv: argas
 * Return: success
 */
int main(int argc, char const *argv[])
{
	int file_d;
	const char *filename, *dest;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	filename = argv[1];
	dest = argv[2];

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", filename);
		exit(98);
	}
	read(file_d, buffer, 1024);
	file_d = open(dest, O_TRUNC | O_CREAT | O_WRONLY, S_IRUSR |
	S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", filename);
		exit(98);
	}
	/* read file */

	if (write(file_d, buffer, 1024) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", filename);
		exit(99);
	}

	dprintf(STDOUT_FILENO, "%s", buffer);
	close(file_d);
	return (0);
}
