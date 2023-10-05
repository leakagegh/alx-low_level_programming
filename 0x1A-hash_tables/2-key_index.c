#include "hash_tables.h"

/**
 * key_index - Calculates the index of a key
 * @key: The key for which the index is calculated
 * @size: The size of the hash table array
 * Return: The index at which the key/value pair should be stored
 *in the hash table array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2((const unsigned char *)key);
	return (hash % size);
}
