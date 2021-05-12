#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node in double linked lists
 * @h: linked lists
 * @idx: index:
 * @n: data
 * Return: New node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
				dlistint_t *node;
				size_t i;

				if (!h)
								return (NULL);

				node = malloc(sizeof(dlistint_t));
				node->n = n;

				if (!*head)
				{
								*head = node;
								return (node);
				}

				for (i = 0; *h->next; i++)
				{
								if (i == idx)
								{
												*head->next = node;
												*head->prev;
												return (*head);
								}
				}

				return (NULL);
}
