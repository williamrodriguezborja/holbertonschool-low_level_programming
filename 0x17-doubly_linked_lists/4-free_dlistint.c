#include "lists.h"

/**
 * free_dlistint - free
 * @head: dlistint_t first node;
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;
	free(head->prev);
	free_dlistint(head->next);
}
