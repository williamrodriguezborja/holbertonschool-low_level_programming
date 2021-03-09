#include <stdio.h>
int main(void)
{
	/*  print sum n natural numbers range 0 since 10^11  100000000000 */

	/*sum =  1 + 2 + 3 + 4 + 5 */
	int i = 0, sum = 0;
	for (; i < 100000000000 ; i++)
	{
		sum += i;
	}

	printf("%d", sum);
}