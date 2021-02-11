#include <stdio.h>
/**
 * fibonacci_until - print fibonacci sequence
 * @until: number limit to print fibonacci
 */
void fibonacci_until(int until)
{
	int i = 1;
	unsigned long f, t1 = 1, t2 = 2;

	f = t1 + t2;
	printf("%lu, %lu, ", t1, t2);

	i = f;
	while (i <= until)
	{
		printf("%lu", f);
		if (i < until)
			printf(", ");
		t1 = t2;
		t2 = f;
		f = t1 + t2;
		i++;
	}
	printf("\n");
}
/**
 * main - print fibonacci sequence until
 * Return: (Sucess)
 */
int main(void)
{
	fibonacci_until(50);
	return (0);
}
