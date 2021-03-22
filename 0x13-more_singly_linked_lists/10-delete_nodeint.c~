#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node in index position
 * @head: Linked list
 * @idx: index to add new node
 * @n: value of new node
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t i;
	listint_t *node, *tmp, *before, *index_node;

	if (!head || !*head) /*edge cases*/
		return (NULL);

	node = malloc(sizeof(listint_t)); /*create node*/

	if (!node) /*malloc edge case*/
		return (NULL);

	node->n = n; /* fill data */

	tmp = *head; /*iterate list with tmp and for*/
	for (i = 0 ; i < idx - 1 && tmp->next; i++) /* search node index -1  */
		tmp = tmp->next;

	/*  before_node ->  new_node  ->   index_node        */
	/*  tmp         ->  node      ->   tmp->next->next   */
	index_node = tmp->next->next;
	before = tmp;

	before->next = node;
	node->next = index_node;
	return (node);
}
