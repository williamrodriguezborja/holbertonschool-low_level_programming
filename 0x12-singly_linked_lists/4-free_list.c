#include "lists.h"

/**
* free_list - free all malloc previous
* @head: linked list
*/
void free_list(list_t *head)
{
	if (!head)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
