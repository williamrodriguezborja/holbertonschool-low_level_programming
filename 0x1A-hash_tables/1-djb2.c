#include "hash_tables.h"

/**
 * hash_djb2 - hash function
 * @str:
 * Return: unsigned long int 
 */
unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
    int c;

    hash = 5381;
    while ((c = *str++))
    {
        printf("%c\n", c);
        // hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }

    printf("--------------\n");
    return (hash);
}