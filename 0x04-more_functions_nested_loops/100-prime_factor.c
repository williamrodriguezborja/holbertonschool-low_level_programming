#include "stdio.h"
/**
 * is_prime - evaluate if a number is prime
 * @num: integer to evaluate
 * Return: 0 - 1 - false or true
 */
int is_prime(int num)
{
	if (num <= 1)
		return (0);
	else
	{
		int i;

		for (i = 2; i < num; i++)
			{
				if (num % i == 0)
					return (0);
			}
		return (1);
	}
}
/**
 * main - print largest prime number
 * Return: Success
 */
int main(void)
{
	unsigned long n = 612852475143, i, largest = 0;

	for (i = 0; i < n; i++)
	{
		/* get factor number */

		//		if (n % i == 0)
		//		{
			/* set largest prime */
		//			if (is_prime(i))
		//				largest = i;
		//		}

	}
	printf("%ld", largest);
	return (0);
}
