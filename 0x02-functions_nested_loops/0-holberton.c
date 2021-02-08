#include <unistd.h>
#include <stdio.h>
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - print holberton
 * Return: (0)
 */
int main(void)
{
	_putchar('H');
	_putchar('o');
	_putchar('l');
	_putchar('b');
	_putchar('e');
	_putchar('r');
	_putchar('t');
	_putchar('o');
	_putchar('n');
	_putchar('\n');
	return (0);
}
