#include "hash_tables.h"

/**
 * hash_table_print - hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	size_t i;
	hash_node_t *node = NULL, *tmp = NULL;
	size_t is_first = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node)
		{
			tmp = node;
			while (tmp)
			{
				if (is_first)
					printf(", ");
				printf("'%s': '%s'", tmp->key, tmp->value);
				is_first = 1;
				tmp = tmp->next;
			}
		}
	}

	printf("}\n");
}
