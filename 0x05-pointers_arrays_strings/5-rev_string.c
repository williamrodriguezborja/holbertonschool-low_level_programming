#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - print string in reverse order
 * @s: char *
 */
void rev_string(char *s)
{
	int start = 0, end = 0;
	char temp;

	while (s[end] != 0)
		end++;
	end--;
	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
