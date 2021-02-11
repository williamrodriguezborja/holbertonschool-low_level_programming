#include <stdio.h>
/**
 * fibonacci_even_total - print fibonacci sequence
 * @limit: number limit to print fibonacci
 */
void fibonacci_even_total(unsigned long limit)
{
	unsigned long f, t1 = 1, t2 = 2, total = 0, i = 3;

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
}
/**
 * main - print total
 * Return: (Sucess)
 */
int main(void)
{
	fibonacci_total(4000000);
	return (0);
}
