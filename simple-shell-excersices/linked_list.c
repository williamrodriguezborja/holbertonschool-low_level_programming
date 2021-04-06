#include "shell.h"

/**
 * str_linked_list - transform str to linked list
 * Return: linked list
 */
node_t *str_linked_list(char *text)
{
    size_t i;
    node_t *head;
    for (i = 0; text[i]; i++)
        add_nodeint_end(&head, text[i]);
    return (head);
}

/**
 * last_node - find last element in linked list
 * @head: linked list
 * Return: last node
 */
node_t *last_node(node_t *head)
{
    /*edge base*/
    if (!head)
        return (NULL);

    if (!head->next) /*base case*/
        return (head);
    return (last_node(head->next));
}

/**
 * add_nodeint_end - add node in the end of linked list
 * @head: const node_t
 * @n: number value of node
 * Return: new node
 */
node_t *add_nodeint_end(node_t **head, char letter)
{
    node_t *node, *last;

    node = malloc(sizeof(node_t)); /*create node*/
    if (!node)                     /*validate succesful node*/
        return (NULL);
    node->value = letter; /*add data to node*/
    node->next = NULL;

    if (!*head) /* edge base */
    {
        *head = node;
        return (node);
    }
    /*add to the end case */
    last = last_node(*head);
    last->next = node;
    return (node);
}

/**
 * free_listint - free linked list nodes
 * @head: linked list
*/
void free_listchar(node_t *head)
{
	if (!head)
    {
        free(head);
        return;
    }
		
	free_listchar(head->next);
	free(head);
}

