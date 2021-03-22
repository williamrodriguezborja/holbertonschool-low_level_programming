#include "lists.h"
#include "stdlib.h"

/**
 * last_node - find last element in linked list
 * @head: linked list
 * Return: last node
 */
listint_t *last_node(listint_t *head)
{
	/*edge base*/
	if (!head)
		return (NULL);

	if (!head->next) /*base case*/
		return (head);
	return (last_node(head->next));
}

/**
 * add_nodeint_end - add node in the end of linked list
 * @head: const listint_t
 * @n: number value of node
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *last;

	node = malloc(sizeof(listint_t)); /*create node*/
	if (!node) /*validate succesful node*/
		return (NULL);
	node->n = n;  /*add data to node*/
	node->next = NULL;

	if (!*head) /* edge base */
	{
		*head = node;
		return (node);
	}
	/*add to the end case */
	last = last_node(*head);
	last->next = node;
	return (node);
}
