#include <stdio.h>
#include "lists.h"

/**
 * print_list - this function print linked list with recursion
 * @h: list_t linked list
 * Return: size_t length of the *h linked list
 */
size_t print_list(const list_t *h)
{
	if (!h)
		return (0);

	if (!h->str)
		printf("[%d] %s\n", 0, NIL);
	else
		printf("[%d] %s\n", h->len, h->str);

	if (!h->next)
		return (1);

	return (1 + print_list(h->next));
}
