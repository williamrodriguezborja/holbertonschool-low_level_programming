#include "lists.h"
/**
 * free_cycle - free linked list
  * @head: linked list
 * @size: size
 */
void free_cycle(const listint_t *head, size_t size)
{
	const listint_t *tmp;

	tmp = head;
	while (size--)
	{
		tmp = head->next;
		free((listint_t *)head);
		head = tmp;
	}
}

/**
 * print_listint_safe - Print all items in linked list
 * @head: const listint_t*  linked list
 * Return: size_t size of list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t size;
	int is_cycle = 0, stop = 1;
	const listint_t *slow, *fast, *to_print;

	if (!head)
		exit(98);
	slow = head, fast = head, size = 0;

	for (; stop; size++)
	{
		to_print = slow;
		slow = slow->next;
		if (fast && fast->next && !is_cycle)
			fast = fast->next->next;
		if (is_cycle)
		{
			to_print = fast;
			fast = fast->next;
			stop = slow != fast;
		}
		else if (!fast || !fast->next)
			stop = slow != NULL;
		else if (slow == fast)
			slow = head, is_cycle = 1;

		printf("[%p] %d\n", (void *)to_print, to_print->n);
		if (!stop && is_cycle)
			printf("-> [%p] %d\n", (void *)slow, slow->n);
	}
	free_cycle(head, size);
	head = NULL;
	if (is_cycle)
		exit(98);
	return (size);
}
