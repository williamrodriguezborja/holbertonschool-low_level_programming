#include "holberton.h"
/**
 * print_last_digit - receive a number and print and give last digit
 * @n: complete number
 * Return: lastdigit
 */
int print_last_digit(int n)
{
	int i = n % 10;

	if (i < 0)
		i = -i;
	_putchar('0' + i);
	return (i);
}
