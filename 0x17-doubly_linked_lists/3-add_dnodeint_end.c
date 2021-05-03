#include "lists.h"


/**
 * add_dnodeint_end - add in the end of double linked list
 * @head: first node
 * @n: new value
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *tmp;
	/* guard condition pointer main */
	if (!head)
		return (NULL);

	node = malloc(sizeof(dlistint_t));

	/* guard condition malloc */
	if (node == NULL)
		return (NULL);

	node->n = n;
	/* if linked list is empty */
	if (*head == NULL)
	{
		node->prev = NULL;
		node->next = NULL;
		*head = node;
		return (node);
	}
	/* iterate linked list */
	tmp = *head;
	for (; tmp->next != NULL;)
		tmp = tmp->next;

	tmp->next = node;
	node->prev = tmp;
	return (node);
}
