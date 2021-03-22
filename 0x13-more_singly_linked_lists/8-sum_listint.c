#include "lists.h"

/**
 * sum_listint - sum each node->n values and return total
 * @head: Linked list
 * Return: int Sum of n of all nodes
 */
int sum_listint(listint_t *head)
{
	if (!head)/*edge case*/
		return (0);
	/* base case */
	if (!head->next)
		return (head->n);

	return (head->n + sum_listint(head->next));
}
