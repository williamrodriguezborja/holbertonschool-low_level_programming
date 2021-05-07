#include "lists.h"

/**
 * sum_dlistint - sum all nums in linked list
 * @head: linked list
 * Return: total sum
 */
int sum_dlistint(dlistint_t *head)
{
	if (!head)
		return (NULL);
	if (!head->next)
		return (head->n);
	return (head->n + sum_dlistint(head->next));
}
