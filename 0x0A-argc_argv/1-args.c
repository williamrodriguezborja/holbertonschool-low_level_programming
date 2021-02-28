#include <stdlib.h>
#include <stdio.h>

/**
 * main - print number of arguments
 * @argc: counter of arguments
 * @argv: arguments unused
 * Return: (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	argv = NULL;
	printf("%d\n", argc - 1);
	return (EXIT_SUCCESS);
}
