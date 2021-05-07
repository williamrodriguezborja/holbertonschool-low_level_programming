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
	dlistint_t *node, *tmp = *h;
	size_t i;

	if (!h || (int)idx < 0) /* guard condition */
		return (NULL);

	if (idx == 0 || !*h) /* add first node case */
		return (add_dnodeint(h, n));

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	for (i = 0; tmp->next; i++) /* middle case */
	{
		if ((i + 1) == idx)
		{
			node->next = tmp->next;
			tmp->next->next->prev = node;
			tmp->next = node;
			node->prev = tmp;
			node->n = n;
			return (node);
		}
		tmp = tmp->next;
	}
	if ((i + 1) == idx) /*end case */
		return (add_dnodeint_end(h, n));

	return (NULL);
}
