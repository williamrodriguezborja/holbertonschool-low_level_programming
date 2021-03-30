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
	const char *from, *dest;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = argv[1], dest = argv[2];
	file_d = open(from, O_RDONLY);
	if (file_d == -1 || !from)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		exit(98);
	}
	read(file_d, buffer, 1024);
	file_d = open(dest, O_TRUNC | O_CREAT | O_WRONLY, S_IRUSR |
	S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	/* read file */
	if (write(file_d, buffer, 1024) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", from);
		exit(99);
	}

	if (close(file_d) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_d);
		exit(100);
	}
	dprintf(STDOUT_FILENO, "%s", buffer);
	return (0);
}
