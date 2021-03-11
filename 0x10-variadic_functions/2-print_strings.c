#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - is a variadic function that print all strings and separator
 * @separator: character array separator
 * @n: variatic
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *value;

	va_start(args, n);

	for (; i < n; i++)
	{
		value = va_arg(args, char *);
		printf("%s", value ? value : "(nil)");

		if (i != (n - 1))
			printf("%s", separator ? separator : "");
	}
	va_end(args);
	printf("\n");
}
