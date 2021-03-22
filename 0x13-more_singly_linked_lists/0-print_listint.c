#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Print all items in linked list
 * @h: const listint_t*  linked list
 * Return: size_t size of list
 */
size_t print_listint(const listint_t *h)
{
	/* edge base */
	if (!h)
		return (0);

	/* normal case */
	printf("%d\n", h->n);
	/* case base  end list*/
	if (!h->next)
		return (1);
	return (1 + print_listint(h->next));
}
