#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - this function recive operator and select correct function
 * @s: operator
 * Return: int (*func)(int, int)
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{'+', op_add},
		{'-', op_sub},
		{'*', op_mul},
		{'/', op_div},
		{'%', op_mod},
		{'\0', NULL}};

	int i = 0;

	while (ops[i].op && !s[1])
	{
		if (*s == ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
