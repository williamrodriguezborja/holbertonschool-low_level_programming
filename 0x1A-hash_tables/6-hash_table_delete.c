#include "hash_tables.h"
/**
 * hash_table_delete - be free hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_node, *next_node;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			current_node = ht->array[i];
			while (current_node)
			{
				next_node = current_node->next;
				if (current_node->key)
					free(current_node->key);
				if (current_node->value)
					free(current_node->value);
				free(current_node);
				current_node = next_node;
			}
		}
	}
	free(ht->array);
	free(ht);
}
