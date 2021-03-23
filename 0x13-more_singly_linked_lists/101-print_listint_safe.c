#include "lists.h"


/**
 * printData - print pointer and number
 * @pointer: listint_t pointer
*/
void printData(const listint_t *pointer)
{
	printf("[%p] %d\n", (void *)pointer, pointer->n);
}

/**
 * totoise_and_hare_detect_cycle - detect cycle in linked list
 * @head: linked list
 * Return: size_t size of elements
 */
size_t totoise_and_hare_detect_cycle(const listint_t *head)
{
	size_t size, i;
	const listint_t *slow, *fast;
	listint_t *tmp;

	slow = head;
	fast = head;
	size = 0;

	while (slow && fast && fast->next)
	{
		printData(slow);
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			tmp = (listint_t *)slow;
			for (i = 0; i < size - 1; i++)
				tmp = tmp->next;
			printData(tmp);
			printData(tmp->next);
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			exit(98);
		}
		size++;
	}
	tmp = (listint_t *)slow;
	for (i = 0; i < size; i++)
	{
		printData(tmp);
		tmp = tmp->next;
	}
	return (size += 2);
}

/**
 * print_listint_safe - Print all items in linked list
 * @head: const listint_t*  linked list
 * Return: size_t size of list
 */
size_t print_listint_safe(const listint_t *head)
{
	if (!head)
		exit(98);
	return (totoise_and_hare_detect_cycle(head));
}
