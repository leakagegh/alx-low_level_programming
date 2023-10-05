#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with
 *a given key from the hash table
 * @ht: The hash table to search in
 * @key: The key to look for
 * Return: The value associated with the element, or NULL
 * if the key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp = NULL;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
