#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - this is a variadic c function that receive format and
 *             print this elements in stdout
 * @format: Pointers chars to print elements
 */
void print_all(const char *const format, ...)
{
	va_list args;
	int i = 0;
	/*edge case */

	if (!format)
		return;

	va_start(args, format);

	for (; format[i]; i++)
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 's':
			char *value = va_arg(args, char *);
			printf("%s", value ? value : "(nil)");
			break;
		default:
			break;
		}
	}
	va_end(args);
	printf("\n");
}
