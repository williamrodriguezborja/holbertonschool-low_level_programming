#include <unistd.h>
#include <strings.h>
#include <stdio.h>
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
 * main - print holberton
 * Return: (0)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
