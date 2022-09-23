#include "hash_tables.h"

/**
 * hash_table_get - Get an element from an hash table
 *
 * @ht: Hash table
 * @key: Table key
 *
 * Return: char* (Value of key or Null)
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;


	index = key_index((unsigned char *)key, ht->size);

	node = ht->array[index];

	while (node)
	{
		if (!strcmp(node->key, key))
			return (node->value);
	}

	return (NULL);

}
