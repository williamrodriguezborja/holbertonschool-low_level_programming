#include "holberton.h"


/**
 * jack_bauer - print 00:00 to 24:59
 */
void jack_bauer(void)
{
	int hour;
	
	for (hour = 0; hour < 24 ; hour++)
	{

		int minute;

		for (minute = 0 ; minute < 60; minute++)
		{
			_putchar('0' + hour / 10);
			_putchar('0' + hour % 10);
			_putchar(':');
			_putchar('0' + (minute / 10));
			_putchar('0' + (minute % 10));
			_putchar('\n');
		}

	}
}
