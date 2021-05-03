#include "lists.h"

/**
 * free_dlistint - free
 * @head: dlistint_t first node;
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (!head)
		return;
	tmp = head->next;
	free(head);
	free_dlistint(tmp);
}
