#include <string.h>
#include <unistd.h>
/**
 * main - Print size of variable in this program
 *
 * Return: (1) Error
 */
int main(void)
{
	write(
		2,
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
		strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n")
		);
	return (1);
}
