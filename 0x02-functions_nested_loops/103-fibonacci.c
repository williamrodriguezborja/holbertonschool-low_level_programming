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
	printf("%lu", t2);

	i = f;
	while (i <= until)
	{
		if ( f % 2 == 0)
		{
			printf(", ");
			printf("%lu", f);
		}
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
	fibonacci_until(10);
	return (0);
}
