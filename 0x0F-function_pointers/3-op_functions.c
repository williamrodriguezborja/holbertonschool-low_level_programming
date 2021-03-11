#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - operate sum
 * @a: number 1
 * @b: number 2
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - operate substract
 * @a: number 1
 * @b: number 2
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - operate mul
 * @a: number 1
 * @b: number 2
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - operate div
 * @a: number 1
 * @b: number 2
 * Return: result
 */
int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - operate modulo
 * @a: number 1
 * @b: number 2
 * Return: result
 */
int op_mod(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
