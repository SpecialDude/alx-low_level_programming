#include "hash_tables.h"

/**
 * hash_table_set - Updates an hash table
 *
 * @ht: An Hash Table
 * @key: string value (cannot be empty or NULL)
 * @value: string value (value to key)
 *
 * Return: int (1 on success 0 otherwise)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *new_node;

	if (!key)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = *(ht->array + index);

	while (node && node->next)
	{
		if (strcmp(node->key, key) == 0)
		{
			node->value = (char *)value;
			return (1);
		}

		node = node->next;
	}

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);

	if (node)
	{
		new_node->key = (char *)key;
		new_node->value = (char *)value;

		new_node->next = node->next;
		node->next = new_node;
	}
	else
	{
		*(ht->array + index) = new_node;
	}

	return (1);
}
