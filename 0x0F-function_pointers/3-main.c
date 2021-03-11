#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
* main - calculator
* @argc: arguments counter
* @argv: argumetns values
* Return: Success
*/
int main(int argc, char *argv[])
{
	int num1, num2, result = 0;
	int (*func)(int, int);
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	func = get_op_func(operator);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	if (!num2 && (*operator == '/'  || *operator == '%'))
	{
		printf("Error\n");
		exit(100);
	}


	result = func(num1, num2);
	printf("%d\n", result);
	return (EXIT_SUCCESS);
}