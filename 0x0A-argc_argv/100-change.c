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
	int amount = atoi(*(argv + 1));

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", amount);

	return (0);
}
