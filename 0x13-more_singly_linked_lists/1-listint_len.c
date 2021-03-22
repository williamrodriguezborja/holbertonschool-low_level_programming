#include "stddef.h"
#include "lists.h"

/**
 * listint_len  - find length of the linked list @h
 * @h: const listint_t
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	if (!h) /* edge base */
		return (0);
	if (!h->next) /* case base  end list*/
		return (1);
	return (1 + listint_len(h->next));
}
