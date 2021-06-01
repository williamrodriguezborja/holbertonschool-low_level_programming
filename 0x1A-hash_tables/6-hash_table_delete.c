#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
    size_t i = 0;
    hash_node_t *tmp = NULL, *prev = NULL, *node = NULL;

    if (!ht)
        return;

    if (ht->size == 1)
    {
        free(ht);
        return;
    }

    for (i = ht->size; i != 0; i--)
    {
        node = ht->array[i];
        if (!node)
        {
            free(node);
            tmp = NULL;
            continue;
        }

        tmp = node;
        while (tmp)
        {
            prev = tmp;
            tmp = tmp->next;
            free(prev);
        }

        tmp = NULL;
    }

    free(ht);
}