#include <stdlib.h>
#include <stdio.h>

/**
 * is_only_digits - check is string contains only digits
 * @c: char to check
 * Return: 0 or 1 is only digits
*/
int is_only_digits(char *c)
{
	int i = 0;

	while (c[i])
	{
		if (!(c[i] >= 48 && c[i] <= 57))
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - print product of multiplication of two arguments
 * @argc: counter of arguments
 * @argv: arguments
 * Return: (Success)
 */
int main(int argc, char **argv)
{
	int result = 0, i = 1;
	/* first edge case Failure*/
	if (argc == 1)
	{
		printf("%d\n", result);
		return (EXIT_SUCCESS);
	}

	for (; i < argc; i++)
	{
		if (!is_only_digits(*(argv + i)))
		{
			printf("Error\n");
			return (EXIT_FAILURE);
		}
		result += atoi(*(argv + i));
	}
	printf("%d\n", result);
	return (EXIT_SUCCESS);
}
