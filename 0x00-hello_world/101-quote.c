#include <string.h>
#include <unistd.h>
/**
 * main - Print size of variable in this program
 *
 * Return: (0) Success
 */
int main(void)
{
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, text, strlen(text));
	return (1);
}
