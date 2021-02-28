#include <stdlib.h>
#include <stdio.h>

/**
 * main - print arguments
 * @argc: counter of arguments
 * @argv: arguments unused
 * Return: (Success)
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (EXIT_SUCCESS);
}
