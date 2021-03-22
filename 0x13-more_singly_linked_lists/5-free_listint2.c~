#include "lists.h"
#include "stdlib.h"

/**
 * free_listint - free linked list nodes
 * @head: linked list
*/
void free_listint(listint_t *head)
{
	if (!head)
		return;
	free_listint(head->next);
	free(head);
}
