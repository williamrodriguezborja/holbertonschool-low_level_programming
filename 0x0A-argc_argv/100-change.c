#include <stdio.h>
#include <stdlib.h>

/**
 * main - Give number and print min coins used to achive amount
 * @argc: length of arguments
 * @argv: arguments
 * Return: (Success)
 */
int main(int argc, char *argv[])
{
	int money[] = {25, 10, 5, 2, 1};
	int cents = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", money[0] + cents);
	return (0);
}
