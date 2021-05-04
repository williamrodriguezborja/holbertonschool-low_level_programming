#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node in double linked lists
 * @h: linked lists
 * @idx: index:
 * @n: data
 * Return: New node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *tmp;
	size_t i;
	/* guard condition */
	if (!h)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	node->n = n;
	/*guard conditions*/
	if (!*h)
	{
		*h = node;
		return (node);
	}

	/* add first node case */
	if (idx == 0)
	{
		node->next = (*h)->next;
		(*h)->prev = node;
		*h = node;
		return (node);
	}

	tmp = *h;
	for (i = 0; tmp->next; i++)
	{
		if (i == idx)
		{
			node->next = tmp->next;
			tmp->next = node;
			node->prev = tmp;
			return (node);
		}
		tmp = tmp->next;
	}

	return (NULL);
}
