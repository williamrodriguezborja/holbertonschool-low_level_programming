#include "hash_tables.h"

/**
 * hash_djb2 - hash function
 * @str: text
 * Return: unsigned long int hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	printf("Initial Hash value: \n", hash);
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
		/* printf("%c: %d current hash: %ld \n", c, c, hash); */
	}
	return (hash);
}
