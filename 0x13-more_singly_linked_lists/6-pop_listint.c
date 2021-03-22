#include "lists.h"

/**
 * pop_listint - delete element in the head and return n data
 * @head: linked list
 * Return: @n of pop element
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp = NULL;

	if (!head || !*head) /*edge case */
		return (0);

	/*  add another tmp node that point to second node */
	tmp = (*head)->next;
	data = (*head)->n; /* save data of head */
	free(*head);     /*delete head and free memory*/
	*head = tmp;    /*replace head with tmp*/
	return (data); /*return data of previous head*/
}
