#include "holberton.h"
/**
 * print_last_digit - receive a number and print and give last digit
 * @n: complete number
 * Return: lastdigit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	_putchar('0' + (n % 10));
	return (n % 10);
}
