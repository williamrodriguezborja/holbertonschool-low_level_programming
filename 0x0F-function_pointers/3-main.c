#include "function_pointers.h"

/**
 * valid_operator - validate operator
 * @c: char to validate
 * Return: 0 or 1 if is valid
*/
int valid_operator(char *c)
{
	int i = 0;

	if (!c)
		return (0);

	for (; c[i] && i < 1; i++)
	{
		if (c[i] == '*' || c[i] == '/' || c[i] == '+' || c[i] ==  '-')
			return (1);
	}
	return (0);
}

/**
 * to_int - validate if number and return atoi
 * @string: to validate
 * Return: int or 0
 */
int to_int(char *string)
{
	int i;

	for (i = 0; string[i]; i++)
		if (!(string[i] >= 48 && string[i] <= 57))
			return (0);
	return (atoi(string));
}

/**
 * error - print error and exit with number error
 * @number_of_error: code of exit
*/
void error(int number_of_error)
{
	printf("Error\n");
	exit(number_of_error);
}
/**
* main - calculator recibe number 1 operator and number 2
*        and print result
* @argc: counter of args
* @argv: arguments values
* Return: Success
*/
/* 0x545645646*/
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*func)(int, int);
	char *operator;

	if (argc != 4)
		error(98);

	/* transform to integer */
	num1 = to_int(argv[1]);
	operator = argv[2];
	num2 = to_int(argv[3]);

	/* edge case  operator invalid */

	if (!valid_operator(operator))
		error(99);

	func = get_op_func(operator);
	result = func(num1, num2);

	printf("Result: %d\n", result);
	return (EXIT_SUCCESS);
}
