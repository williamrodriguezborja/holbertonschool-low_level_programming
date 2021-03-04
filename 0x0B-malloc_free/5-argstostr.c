#include "holberton.h"

/**
* argstostr - join all arguments in new string
* @ac: size of arguments
* @av: arguments
* Return: new string
*/
char *argstostr(int ac, char **av)
{
	char *new_string;
	int i = 1, j = 0, size = 0;

	/* edge case */
	if (!ac || !av)
		return (NULL);

	/* normal case */
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			j++;
			size++;
		}
		i++;
	}

	new_string = malloc(sizeof(char) * (size + 1));

	i = 1, size = 0;

	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			new_string[size] = av[i][j];
			j++;
			size++;
		}
		new_string[size++] = '\n';
		i++;
	}

	new_string[++size] = '\0';
	return (new_string);
}
