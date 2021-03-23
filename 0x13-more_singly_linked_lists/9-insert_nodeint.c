#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node in index position
 * @head: Linked list
 * @idx: index to add new node
 * @n: value of new node
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t i;
	listint_t *node, *tmp, *before, *index_node;

	if (!head || !*head)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;

	tmp = *head;
	for (i = 0 ; i < idx - 1 && tmp->next; i++)
		tmp = tmp->next;

	if (i < idx - 1 )
	{
		free(node);
		return (NULL);
	}

	index_node = tmp->next;
	before = tmp;
	before->next = node;
	node->next = index_node;
	return (node);
}
