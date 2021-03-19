#include "lists.h"
#include <string.h>

/**
 * last_node - return last element
 * @h: list_t linked list
 * Return: pointer to last element
 */
list_t *last_node(list_t *h)
{
	/* edge case */
	if (!h)
		return (0);
	/* base case*/
	if (!h->next)
		return (h);

	return (last_node(h->next));
}
/**
 * add_node_end - this function attach node in a linked list in the end
 * @head: start of linked list
 * @str: string to store in new node
 * Return: New node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *last;
	int len;

	node = malloc(sizeof(list_t));

	if (!node)
		return (NULL);

	node->str = strdup(str);
	for (len = 0; str[len]; len++)
	{}
	node->len = len;
	node->next = NULL;

	/* edge case*/
	if (!*head)
		*head = node;
	else
	{
		last = last_node(*head);
		last->next = node;
	}
	return (node);
}
