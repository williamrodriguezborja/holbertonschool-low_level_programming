#include <stdarg.h>

/**
 *  sum_them_all - sum all variatic numbers
 *  @n: number of parameters variatics
 *  Return: Sum of all numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i = 0;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
