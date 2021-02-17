#include "holberton.h"

/**
 * puts - print even index
 */
void puts2(char *str){
	int i;
	for (i = 0; str[i]; i+=2)
		_putchar(str[i]);
	_putchar('\n');
}
