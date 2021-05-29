#include "hash_tables.h"

/**
 * hash_table_get - get value
 * @ht: hash table
 * @key: key
 * Return: char*
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *tmp = NULL;

	if (!ht || !key) /*guard condition*/
		return (0);

	/* get index */
	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL) /* check index is busy*/
		return (NULL);

	tmp = ht->array[index]; /* TODO: update */
	while (tmp)
	{
		if (!strcmp(key, tmp->key))
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}

	return (NULL);
}
