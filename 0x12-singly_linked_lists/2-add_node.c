#include "lists.h"
#include <string.h>

/**
 * add_node - this function attach node in a linked list
 * @head: start of linked list
 * @str: string to store in new node
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int len;

	node = malloc(sizeof(list_t));

	if (!node)
		return (NULL);

	node->str = strdup(str);

	for (len = 0; str[len]; len++)
	{}
	node->len = len;
	/* edge case*/
	if (!*head)
		*head = node;
	else
	{
		node->next = *head;
		*head = node;
	}
	return (node);
}
