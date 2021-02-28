#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - print product of multiplication of two arguments
 * @argc: counter of arguments
 * @argv: arguments
 * Return: (Success)
 */
int main(int argc, char *argv[])
{
	/* first edge case Failure*/
	if (argc < 3)
	{
		printf("Error\n");
		return (EXIT_FAILURE);
	}

	/* normal case */
	int num1  = atoi(*(argv + 1));
	int num2 = atoi(*(argv + 2));

	printf("%d\n", num1 * num2);

	return (EXIT_SUCCESS);
}
