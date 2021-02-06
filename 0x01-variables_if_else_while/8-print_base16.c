#include <stdio.h>
/**
 * main - Print the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	char b;

	for (b = 'a'; b <= 'f'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
