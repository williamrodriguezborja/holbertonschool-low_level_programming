#include <stdlib.h>
#include <stdio.h>

/**
 * main - print product of multiplication of two arguments
 * @argc: counter of arguments
 * @argv: arguments
 * Return: (Success)
 */
int main(int argc, char **argv)
{
	int result = 0, n;
	/* first edge case Failure*/
	if (argc == 1)
	{
		printf("%d\n", result);
		return (EXIT_SUCCESS);
	}

	while (argc-- && argc > 0)
	{
		if (**(argv + argc) == '0')
			continue;
		n = 0;
		n = atoi(*(argv + argc));

		if (!n)
		{
			printf("Error\n");
			return (EXIT_FAILURE);
		}
		result += n;
	}
	printf("%d\n", result);
	return (EXIT_SUCCESS);
}
