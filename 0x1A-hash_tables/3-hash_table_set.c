#include "hash_tables.h"

/**
 * hash_table_set - Updates an hash table
 *
 * @ht: An Hash Table
 * @key: string value (cannot be empty)
 * @value: string value (value to key)
 *
 * Return: int (1 on success 0 otherwise)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *new_node;

	if (!ht || !key || !strcmp(key, "") || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			node->value = strdup(value);
			return (1);
		}
		if (!node->next)
			break;
		node = node->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (node)
	{
		new_node->next = node->next;
		node->next = new_node;
	}
	else
	{
		new_node->next = NULL;
		ht->array[index] = new_node;
	}

	return (1);
}
