#include <stdio.h>
/**
 * main - print all different combination of two numbers
 * Return: (success)
 */
int main(void)
{
	int i = 1;
	char first;
	char second;

	for (; i < 90; i++)
	{
		first = (i / 10);
		second = (i % 10);

		if ((i > 9 && first - second > 0) || first == second)
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
