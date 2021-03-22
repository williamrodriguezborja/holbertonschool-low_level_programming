#include "lists.h"

/**
 * delete_nodeint_at_index - delete node and free memory
 * @head: Linked list
 * @index: index to add new node
 * Return: -1 or 1 if is success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t i;
	listint_t *next, *before, *index_node;

	if (!head || !*head) /*edge cases*/
		return (-1);

	before = *head; /*iterate list with tmp and for*/

	for (i = 0 ; index && i < index - 1 && before->next; i++)
		before = before->next;

	if (!before->next)
		return (-1);


	if (!index) /* delete head*/
	{
		*head = before->next;
		free(before);
		return (1);
	}

	/*delete middle element */
	index_node = before->next;
	next = index_node->next;
	free(before->next);
	before->next = next;
	return (1);
}
