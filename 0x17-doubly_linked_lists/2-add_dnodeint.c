#include "lists.h"

/**
 * add_dnodeint - add node in the head
 * @head: linked list double
 * @n: new element
 * Return: add in the head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* problem is add new node in begin */
	dlistint_t *node;
	/* edges cases */
	if (!head) /*  [0x01][0x00]   */
		return (NULL);
	/*  where null is false */

	node = malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	/* mathematical solve */
	/* new_node U linked_list - conjunto */
	if (!*head)
	{
		*head = node;
		return (node);
	}
	node->next = *head;
	*head = node;
	/* return new node */
	return (node);
}
