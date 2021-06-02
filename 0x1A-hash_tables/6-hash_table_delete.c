#include "hash_tables.h"

void free_linked_list(hash_node_t *head)
{
    if (!head)
        return;

    free_linked_list(head->next);
    free(head->value);
    free(head->key);
    free(head);
}

void hash_table_delete(hash_table_t *ht)
{
    size_t i = 0;
    if (!ht)
        return;

    if (ht->size == 1)
    {
        free(ht);
        return;
    }

    for (i = ht->size; i != 0; i--)
    {
        free_linked_list(ht->array[i]);
        free(ht->array[i]);
    }

    free(ht->array);
    free(ht);
}