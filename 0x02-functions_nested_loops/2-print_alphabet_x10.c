#include "holberton.h"
/**
 * print_alphabet - print the alphabet
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
