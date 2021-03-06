#include "lists.h"
/**
 * print_listint_safe - Print all items in linked list
 * @head: const listint_t*  linked list
 * Return: size_t size of list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t size;
	const listint_t *slow, *fast;

	if (!head)
		return (0);

	slow = head, fast = head, size = 0;
	for (; slow->next; size++)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
			if (slow == fast)
				fast = fast->next;

			while (slow != fast && size > 1)
			{
				slow = slow->next;
				printf("[%p] %d\n", (void *)fast, fast->n);
				fast = fast->next;
				size++;
			}
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			size++;
			break;
		}

		if (!fast || !fast->next)
		{
			for (; slow; slow = slow->next, size++)
				printf("[%p] %d\n", (void *)slow, slow->n);
			size++;
			break;
		}
	}
	return (size);
}
