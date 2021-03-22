#include "lists.h"
#include "stdlib.h"

/**
 * free_listint2 - free linked list nodes
 * @head: linked list pointer
*/
void free_listint2(listint_t **head)
{
	if (!head)
		return;

	if (!*head)
		return;
	free_listint(*head->next);
	free(*head);
	free(head);
}
