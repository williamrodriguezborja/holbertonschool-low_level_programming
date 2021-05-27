#include "hash_tables.h"

/**
 * hash_table_create - hash table constructor
 * @size: length
 * Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (size == 0)
		size++;

	table = malloc(sizeof(hash_table_t) * size);
	if (!table)
		return (NULL);

	return (table);
}
