#include <stdio.h>
/**
 * main - print all different combination of two numbers
 * Return: (success)
 */
int main(void)
{
	int i;

	for (i = 1; i < 90; i++)
	{
		int first = i / 10, second = i % 10;

		if (first == second)
			continue;
		if ((i > 9 && (first - second) > 0))
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
	return (0);
}
