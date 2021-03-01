#include <stdio.h>

/**
 * main - Give number and print min coins used to achive amount
 * @argc: length of arguments
 * @argv: arguments
 * Return: (Success)
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else{
		int cents[] = {25, 10, 5, 2, 1},
			coins_used = 0,
			amount = atoi(argv[1]),
			coin = 0;

		while (amount)
		{
			amount -= cents[coin];
			coins_used++;
			if (amount < 0)
			{
				amount += cents[coin];
				coin++;
				coins_used--;
			}
		}
		printf("%d\n", coins_used);
		return (0);
	}
}
