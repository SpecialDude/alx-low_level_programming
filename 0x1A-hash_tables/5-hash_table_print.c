#include "hash_tables.h"

/**
 * hash_table_print - Prints an hash table
 *
 * @ht: An hash table
 *
 * Return: Void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i, index;
	int flag = 0;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			index = i;
			flag = 1;
		}
	}

	printf("{");

	for (i = 0; flag && i < (index) + 1; i++)
	{
		node = ht->array[i];

		while (node)
		{
			printf("'%s': '%s'", node->key, node->value);

			if (i < index || node->next)
				printf(", ");

			node = node->next;
		}
	}
	printf("}\n");
}
