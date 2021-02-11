#include <stdio.h>
/**
 * main - print total
 * Return: (Sucess)
 */
int main(void)
{
	unsigned long f, t1 = 1, t2 = 2, total = 0, i = 0, limit = 4000000;

	while (i <= limit)
	{
		f = t1 + t2;
		t1 = t2;
		t2 = f;
		if ((f % 2 == 0) && (f <= limit))
			total += f;
		i++;
	}
	printf("%ld\n", total);
	return (0);
}
