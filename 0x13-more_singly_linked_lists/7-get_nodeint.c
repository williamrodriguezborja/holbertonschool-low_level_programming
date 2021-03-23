#include "lists.h"

/**
 * get_nodeint_at_index - find node by index
 * @head: Linked list
 * @index: index of the node to be finded
 * Return: listint_t node with this index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;
	listint_t *tmp = NULL;

	if (!head)/*edge case*/
		return (NULL);

	tmp = head;
	for (i = 0 ; i < index && tmp->next; i++)
		tmp = tmp->next;


	if (i < index)
		return (NULL);

	return (tmp);
}
