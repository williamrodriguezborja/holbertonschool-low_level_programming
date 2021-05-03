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

	/* guard conditon */
	if (!head)
		return (NULL);
	/* find index node  */
	for (i = 0; i < index && head->next; i++)
		head = head->next;
	/* edge case out range */
	if (index > i)
		return (NULL);
	return (head);
}
