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
	int i = 0, j = 0, size = 0;

	/* edge case */
	if (!ac || !av)
		return (NULL);

	/* normal case */
	for (; i < ac; i++, size++)
	{
		for (j = 0; av[i][j]; j++, size++)
		{}
	}

	new_string = malloc(sizeof(char) * (size + 1));
	if (!new_string)
		return (NULL);

	i = 0, size = 0;

	while (i < ac)
	{
		for (j = 0; av[i][j]; j++, size++)
			new_string[size] = av[i][j];
		new_string[size++] = '\n';
		i++;
	}

	new_string[size] = '\0';
	return (new_string);
}
