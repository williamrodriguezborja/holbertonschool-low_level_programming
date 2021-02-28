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
	printf("%d\n", argc);
	return (EXIT_SUCCESS);
}
