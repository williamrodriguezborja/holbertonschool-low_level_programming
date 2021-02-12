#include "holberton.h"
/**
 * more numbers - print numbers
 */
void more_numbers(void)
{
	int i;

	for (i = 0 ; i <= 14 ; i++)
	{
		int j;
		for (j = 0 ; j <= 14; j++)
		{
			if (j < 10)
				_putchar(j + '0');
			else
			{
				_putchar('0' + (j / 10));
				_putchar('0' + (j % 10));
			}
		}
		_putchar('\n');
	}
}
