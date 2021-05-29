#include "hash_tables.h"

/**
 * key_index - get index
 * @key: char key
 * @size: size of hash table
 * Return: unsigned long int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);

	if (size == 0)
		return (0);

	return (hash % size);
}
