#include <stdio.h>
#include "lists.h"


/**
 * print_listint - Print all items in linked list
 * @h: const listint_t*  linked list
 * Return: size_t size of list
 */
size_t print_listint(const listint_t *h)
{
	if (!h) /* edge base */
		return (0);
	/* normal case */

	printf("%d\n", h->n);

	if (h->next == NULL) /* case base  end list*/
		return (1);
	return (1 + print_listint(h->next));
}
