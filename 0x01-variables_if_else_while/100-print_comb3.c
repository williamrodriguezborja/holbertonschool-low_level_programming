#include <stdio.h>
/**
 * main - print all different combination of two numbers
 * Return: (success)
 */
int main(void)
{
	int i;
	char first, second;

	for (i = 1; i < 90; i++)
	{
		if (i / 10 == i % 10)
			continue;
		if ((i > 9 && ((i / 10) - (i % 10) > 0)))
			continue;
		putchar('0' + first);
		putchar('0' + second);
		if (i != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
