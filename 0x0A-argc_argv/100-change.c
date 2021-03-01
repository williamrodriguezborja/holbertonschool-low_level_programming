#include <stdlib.h>
#include <stdio.h>

/**
 * main - Give number and print min coins used to achive amount
 * @argc: length of arguments
 * @argv: arguments
 * Return: (Success)
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (EXIT_FAILURE);
	}

	int cents[] = {25, 10, 5, 2, 1};
	int amount = atoi(argv[1]), coin = 0, coins_used = 0, tmp = 0;

	while (tmp < amount)
	{
		tmp += cents[coin];
		coins_used++;
		if (tmp > amount)
		{
			tmp -= cents[coin];
			coin++;
			coins_used--;
		}
	}

	printf("%d\n", coins_used);
	return (EXIT_SUCCESS);
}
