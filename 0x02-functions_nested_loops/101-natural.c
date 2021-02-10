#include <stdio.h>
/**
 * main - print numbers multiples of 3, 5
 * Return: Success
 */
int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;

	}
	printf("%d\n", sum);
	return (0);
}
