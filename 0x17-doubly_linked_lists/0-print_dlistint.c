#include "lists.h"

/**
 * print_dlistint - print double linked lists
 * @h: dlinked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	if (!h)
		return (0);
	/* case base */
	if (!h)
		return (0);
	/* normal */
	printf("%d\n", h->n);
	return (1 + print_dlistint(h->next));
}
