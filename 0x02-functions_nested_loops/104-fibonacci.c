#include <stdio.h>
#include <math.h>
/**
 * main - print total
 * Return: (Sucess)
 */
int main(void)
{
	unsigned long f, t1 = 0, t2 = 1, i = 2, limit = 98, split1, split2;

	while (i <= limit)
	{
		f = t1 + t2;
		t1 = t2;
		t2 = f;
		if (i > 91)
		{
			split1 = f / 100000;
			split2 = f % 100000;
			printf("%ld%ld\n", split1, split2);
		}
		else
		{
			printf("%ld-%ld", i, f);
			printf(" ,\n");
		}
		i++;
	}
	return (0);
}
