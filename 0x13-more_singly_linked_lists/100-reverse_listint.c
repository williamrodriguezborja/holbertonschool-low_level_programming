#include "lists.h"

/**
 * reverse_listint - reverse linked list
 * @head: linked list
 * Return: reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t  *prev = NULL, *next = NULL;

	if (!head || !*head)
		return (NULL);

	while ((*head)->next) /* current = *head; */
	{
		next = (*head)->next;
		(*head)->next = prev;/* current->next = prev; */
		prev = *head;
		*head = next;/* current = next; */
	}
	(*head)->next = prev;
	return (*head);
}
