#include "lists.h"

#define ERROR -1
#define SUCCESS 1
/**
 * delete_dnodeint_at_index - Delete node in double linked list
 * @head: double linked list
 * @index: int
 * Return: Always EXIT_SUCCESS.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t i;
	dlistint_t *tmp;

	if (!head || !*head)
		return (ERROR);

	tmp = *head;
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
