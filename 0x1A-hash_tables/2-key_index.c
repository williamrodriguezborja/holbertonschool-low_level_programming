#include "hash_tables.h"

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash;
    hash = hash_djb2(key);

    if (size == 0)
        return (0);
        
    return (hash % size);
}
