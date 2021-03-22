#ifndef LISTS_H
#define LISTS_H

/*----------------- structs  */
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;



/* ------------------ prototypes          */
size_t print_listint(const listint_t *);
size_t listint_len(const listint_t *);

#endif
