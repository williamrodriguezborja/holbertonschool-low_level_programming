#include "lists.h"

#define ERROR -1
#define SUCCESS 1
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t i;
	dlistint_t *tmp = *head;

	if (!head || !*head)
		return (ERROR);

	if (!index)
	{
		if (!tmp->next)
			*head = NULL;
		else
		{
			*head = tmp->next;
			tmp->next->prev = NULL;
		}
		free(tmp);
		return (SUCCESS);
	}

	for (i = 0; tmp->next; i++)
	{
		if (index == i)
		{
			tmp->prev->next = tmp->next;
			free(tmp);
			return (SUCCESS);
		}
		tmp = tmp->next;
	}
	return (ERROR);
}
