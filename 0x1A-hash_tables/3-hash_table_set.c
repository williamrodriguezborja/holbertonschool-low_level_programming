#include "hash_tables.h"
#include <string.h>
/**
 * hash_node - create new node 
 * @key: key
 * @value: value
 * @next: next
 * Return: hash_node_t* 
 */
hash_node_t *hash_node(const char *key, const char *value, hash_node_t *next)
{
	hash_node_t *new_node = NULL;
	if (!key || !value || !*key) /*guard condition*/
		return (NULL);

	new_node = malloc(sizeof(hash_node_t)); /* create node */
	if (!new_node)
		return (0);
	new_node->key = strdup(key); /* fill new_node data */
	new_node->value = strdup(value);
	new_node->next = next;
	return (new_node);
}

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
	hash_node_t *tmp = NULL;

	if (!ht || !key || !value) /*guard condition*/
		return (0);

	index = key_index((const unsigned char *)key, ht->size); /* get index */

	if (ht->array[index] == NULL)
	{
		ht->array[index] = hash_node(key, value, NULL);
		return (1);
	}
	tmp = ht->array[index]; /* TODO: update */
	while (tmp)
	{
		if (!strcmp(key, tmp->key))
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	ht->array[index] = hash_node(key, value, ht->array[index]);
	return (1);
}
