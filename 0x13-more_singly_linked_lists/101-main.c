#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "lists.h"

listint_t *_add_node(listint_t **head, int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(*tmp));
	if (!tmp)
		return (NULL);
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;
	listint_t *node1;
    listint_t *node2;
    listint_t *node3;
    listint_t *node4;
    listint_t *node5;
	size_t n;

	head = NULL;
    /* 1 -> 4 -> 3 -> 2 -> 5 -> (3) */
	node5 = _add_node(&head, 5);
    node4 = _add_node(&head, 4);
    node3 = _add_node(&head, 3);
    node2 = _add_node(&head, 2);
    node1 = _add_node(&head, 1);

    node1->next = node4;
    node4->next = node3;
    node3->next = node2;
    node2->next = node5;
    node5->next = node3;
    
	n = print_listint_safe(head);
	printf("%lu\n", n);
	return (0);
}
