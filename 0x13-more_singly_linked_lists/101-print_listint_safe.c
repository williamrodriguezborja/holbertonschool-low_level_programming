#include "lists.h"


void free_cycle(const listint_t *head)
{
	listint_t *tmp;
	while (head)
	{
		tmp = head->next;
		free((listint_t *)head);
		head = NULL;
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
	const listint_t *slow, *fast;

	if (!head)
		exit(98);
	slow = head;
	fast = head;
	size = 0;

	while (slow->next)
	{
		if (!fast || !fast->next)
		{
			while (slow)
			{
				printf("[%p] %d\n", (void *)slow, slow->n);
				slow = slow->next;
				size++;
			}
			break;
		}
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				printf("[%p] %d\n", (void *)fast, fast->n);
				free((listint_t *)head);
				head = slow;
				fast = fast->next;
			}

			printf("size: %ld\n", size);

			while ((size--) + 1)
			{
				slow = fast->next;
				free((listint_t *)fast);
				fast = slow;
			}
			exit(98);
		}
		size++;
	}
	return (size);
}
