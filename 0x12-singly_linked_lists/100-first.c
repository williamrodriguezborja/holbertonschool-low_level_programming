#include "lists.h"
#include <stdio.h>

void before(void) __attribute__ ((constructor));

/**
 * before - execute before main
*/


void before(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon");
	printf(" my back!\n");
}
