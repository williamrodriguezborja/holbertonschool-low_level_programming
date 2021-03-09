#include <stdio.h>


void bad(long n)
{
	/*sum =  1 + 2 + 3 + 4 + 5 */
	long i = 0, sum = 0; // 1
	for (; i < n ; i++)	{sum += i; }
	printf("%ld\n", sum); // 1
}
void good(long n)
{
	printf("%ld\n", (long)(n * (n + (long)1 )) / (long)2);
}


int main(void)
{
	/*  print sum n natural numbers range 0 since 10^11  100000000000 */
	good(1000000000000000);
	//bad(100000000000);
}