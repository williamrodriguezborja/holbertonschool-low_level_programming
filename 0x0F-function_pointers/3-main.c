#include "function_pointers.h"

/**
* main - get number 1 operator and number 2  and print result
* @argc: counter of args
* @argv: arguments values
* Return: Success
*/
int main(int argc, char *argv[])
{
	int num1, num2, result, i = 0;
	int (*func)(int, int);
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* transform to integer */
	for (i = 1; argv[1][i]; i++)
		if (!(argv[1][i] >= 48 && argv[1][i] <= 57))
		{
			printf("Error\n");
			exit(99);
		}
	num1 = atoi(argv[1]);

	operator= argv[2];

	for (; operator[i] && i<1; i++)
	{
		if (operator[i] != '*' || operator[i] != '/' || operator[i] != '+' ||
			operator[i] != '-' ||
			operator[i] != '%')
		{
			printf("Error\n");
			exit(99);
		}
	}

	for (i = 0; argv[3][i]; i++)
		if (!(argv[3][i] >= 48 && argv[3][i] <= 57))
		{
			printf("Error\n");
			exit(99);
		}
	num2 = atoi(argv[3]);
	/* edge case  operator invalid */

	func = get_op_func(operator);
	result = func(num1, num2);

	printf("%d\n", result);
	return (EXIT_SUCCESS);
}
