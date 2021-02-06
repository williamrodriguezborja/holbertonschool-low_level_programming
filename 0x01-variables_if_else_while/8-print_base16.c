#include <stdio.h>
/**
 * main - Print the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9' ; n++)
		putchar(n);
	char a;

	for (a = 'a'; a <= 'f' ; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
