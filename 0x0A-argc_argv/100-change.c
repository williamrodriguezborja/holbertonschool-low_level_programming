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
	int cents = 0, c = 0, coins_used = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
		cents = 0;

	while (cents)
	{
		cents -= money[c];
		coins_used++;
		if (cents < 0)
		{
			cents += money[c];
			c++;
			coins_used--;
		}
	}

	printf("%d\n", coins_used);
	return (0);
}
