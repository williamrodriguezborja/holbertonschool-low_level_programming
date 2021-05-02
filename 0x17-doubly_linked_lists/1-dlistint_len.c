#include "lists.h"
/**
 * dlistint_len - get len in linked lists
 * @h: linked list
 * Return: length
 */
size_t dlistint_len(const dlistint_t *h)
{
	if (!h)
		return (0);
	return (1 + dlistint_len(h->next));
}
