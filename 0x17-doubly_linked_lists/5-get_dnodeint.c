#include "lists.h"


/**
 * get_dnodeint_at_index - get node in index
 * @head: linked list
 * @index: index
 * Return: node with index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i;
	dlistint_t *tmp;

	if (!head || (!index && !head))
		return (NULL);

	tmp = head;
	for (i = 0; i < index && tmp->next; i++)
	{
		tmp = tmp->next;
	}

	if (index > i)
		return (NULL);

	return (tmp);
}
