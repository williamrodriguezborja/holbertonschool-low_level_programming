#include "function_pointers.h"

/**
* main - get number 1 operator and number 2  and print result
* @argc: counter of args
* @argv: arguments values
* Return: Success
*/
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*func)(int, int);
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	operator = argv[2];

	num2 = atoi(argv[3]);
	func = get_op_func(operator);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	result = func(num1, num2);
	printf("%d\n", result);
	return (EXIT_SUCCESS);
}
