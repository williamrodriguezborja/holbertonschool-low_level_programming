#include <stdlib.h>
#include <stdio.h>

/**
 * main - print whats my name
 */
int main(int argc, char **argv)
{
	if (argc)
		printf("%s\n", argv[0]);
	return (EXIT_SUCCESS);
}
