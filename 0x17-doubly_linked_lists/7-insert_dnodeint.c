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

	if (!h || (int)idx < 0) /* guard condition */
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	if (!*h) /*guard conditions*/
	{
		*h = node;
		return (node);
	}
	tmp = *h;
	if (idx == 0)/* add first node case */
	{
		node->next = tmp;
		tmp->prev = node;
		*h = node;
		return (node);
	}
	for (i = 0; tmp->next; i++)
	{
		if (i == idx)
		{	node->next = tmp;
			tmp->prev->next = node;
			node->prev = tmp->prev;
			tmp->prev = node;
			return (node);
		}
		tmp = tmp->next;
	}
	if ((i + 1) == idx)
	{
		tmp->next = node;
		node->prev = tmp;
		return (node);
	}
	return (NULL);
}
