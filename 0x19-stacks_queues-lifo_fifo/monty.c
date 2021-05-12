#include "monty.h"

/**
 * main - this monty language intrepeter
 */
int main(int argc, char *argv[])
{
	char buffer_line[1024];

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	read_file(argv[1], buffer_line);
	return (EXIT_SUCCESS);
}
