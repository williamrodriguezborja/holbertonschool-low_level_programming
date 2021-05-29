#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - add or update node and manage collisions
 * @ht: hash_table
 * @key: key
 * @value: value
 * Return: 0 or 1 is success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *node = NULL, *tmp = NULL;

	if (!ht || !key || !value) /*guard condition*/
		return (0);

	/* get index */
	index = key_index((const unsigned char *)key, ht->size);

	/* create node */
	node = malloc(sizeof(hash_node_t));

	if (!node)
		return (0);

	/* fill node data */
	node->key = (char *)key;
	node->value = (char *)value;

	/* check index is busy*/
	if (ht->array[index] != NULL)
	{
		/* TODO: update */
		tmp = ht->array[index];
		while (tmp->next)
		{
			if (!strcmp(key, tmp->key))
			{
				tmp->value = (char *)value;
				return (1);
			}
			tmp = tmp->next;
		}
		/* collisions case */
		node->next = ht->array[index];
	}
	ht->array[index] = node;

	return (1);
}
