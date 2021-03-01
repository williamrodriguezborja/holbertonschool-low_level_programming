#include <stdio.h>
#include <stdlib.h>

/**
 * main - Give number and print min coins used to achive amount
 * @argc: length of arguments
 * @argv: arguments
 * Return: (Success)
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(*(argv + 1)));

	return (0);
}
