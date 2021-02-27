#include "holberton.h"
/**
 * _puts - prints string in standar output
 * @str: *str string to print
 */
void _puts(char *str)
{
	/* while s en la posicion actual != \0 */
	int i = 0;

	while (str[i] != 0)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
