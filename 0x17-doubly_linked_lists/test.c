#include "lists.h"
#include <stdio.h>

int main()
{
				/* linked list mode  */
				dlistint_t *iterator;
				dlistint_t *head  = malloc(sizeof(dlistint_t));
				dlistint_t *node1 = malloc(sizeof(dlistint_t));
				dlistint_t *node2 = malloc(sizeof(dlistint_t));
				dlistint_t *node3 = malloc(sizeof(dlistint_t));
				dlistint_t *node4 = malloc(sizeof(dlistint_t));
				dlistint_t *node5 = malloc(sizeof(dlistint_t));

				head = node1;
				head = head;

				node1->n = 1;
				node1->next = node2;

				node2->prev = node1;
				node2->n = 2;
				node2->next = node3;

				node3->prev = node2;
				node3->n = 3;
				node3->next = node4;

				node4->prev = node3;
				node4->n = 5;
				node4->next = node5;

				node5->prev = node4;
				node5->n = 9;
				node5->next = NULL;

				iterator = head;
				for (; iterator != NULL;) {
					iterator = iterator->next;
				}

				return (0);
}
