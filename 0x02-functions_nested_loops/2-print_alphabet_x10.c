#include <unistd.h>
#include <strings.h>
#include <stdio.h>
#include "holberton.h"
/**
 * _putchar - print to std out
 * @c: Characther Int or char
 * Return: int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_alphabet - print to [a-z]
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

/**
 * print_alphabet_x10 - print the alphabets
 */
void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
		print_alphabet();
	}
}
/**
 * main - print holberton
 * Return: (0)
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
