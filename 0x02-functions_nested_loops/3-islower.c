#include <unistd.h>
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
 * main - print holberton
 * Return: (0)
 */
int main(void)
{
	return (0);
}
