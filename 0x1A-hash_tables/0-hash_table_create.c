#include "hash_tables.h"
/**
 * hash_table_create - hash constructor
 * @size: unsigned long int
 * Return: hash_table_t*
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = NULL;

	new = malloc(sizeof(hash_table_t)); /**/
	if (!new)
		return (NULL);

	new->size = size;
	new->array = calloc(size, sizeof(hash_node_t));

	if (!new->array)
		return (NULL);

	return (new);
}
