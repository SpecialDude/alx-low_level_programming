#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table
 *
 * @size: Size of table
 *
 * Return: shash_table_t* (Pointer to table)
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	shash_node_t **array;

	table = malloc(sizeof(shash_table_t));

	if (table == NULL)
		return (NULL);

	array = calloc(size, sizeof(shash_node_t *));

	if (array == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;
	table->array = array;
	table->shead = NULL;
	table->stail = NULL;

	return (table);

}

/**
 * find_head_node - Look for head of linked list in table
 *
 * @ht: Hash table
 *
 * Return: shash_node_t* (list head node)
 */
shash_node_t *find_head_node(const shash_table_t *ht)
{
	shash_node_t *node;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		if (node)
		{
			if (node->sprev == NULL)
				return (node);
		}
	}

	return (NULL);
}

/**
 * find_tail_node - Look for tail of linked list in table
 *
 * @ht: Hash table
 *
 * Return: shash_node_t* (list tail node)
 */
shash_node_t *find_tail_node(const shash_table_t *ht)
{
	shash_node_t *node;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		if (node)
		{
			if (node->snext == NULL)
				return (node);
		}
	}

	return (NULL);
}

/**
 * insert_into_list - Inserts into list (Orderly)
 *
 * @head: Head of list
 * @new_node: New node to add
 */
void insert_into_list(shash_node_t **head, shash_node_t *new_node)
{
	shash_node_t *node, *prev_node;

	new_node->snext = NULL;
	new_node->sprev = NULL;

	if (!head || !(*head))
		return;

	node = *head;
	prev_node = NULL;


	while (node && node->snext)
	{
		if (strcmp(node->key, new_node->key) > 0)
			break;
		prev_node = node;
		node = node->snext;
	}

	if (prev_node == NULL)
	{
		new_node->snext = node;
		node->sprev = new_node;
	}
	else
	{
		new_node->sprev = prev_node;
		new_node->snext = node;

		prev_node->snext = new_node;

		if (node)
			node->sprev = new_node;
	}
}

/**
 * shash_table_set - Updates an Ordered hash table
 *
 * @ht: An Hash Table
 * @key: string value (cannot be empty)
 * @value: string value (value to key)
 *
 * Return: int (1 on success 0 otherwise)
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node, *new_node, *head;

	if (!ht || !key || !strcmp(key, "") || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	node = ht->array[index];

	if (node)
		new_node->next = node;
	else
		new_node->next = NULL;

	head = find_head_node(ht);

	insert_into_list(&head, new_node);

	ht->array[index] = new_node;
	return (1);
}

/**
 * shash_table_get - Get an element from an ordered hash table
 *
 * @ht: Hash table
 * @key: Table key
 *
 * Return: char* (Value of key or Null)
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (!ht || !key || !strcmp(key, ""))
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	node = ht->array[index];

	while (node)
	{
		if (!strcmp(node->key, key))
			return (node->value);

		node = node->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Prints an ordered hash table
 *
 * @ht: Ordered hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (!ht)
		return;

	node = find_head_node(ht);

	printf("{");

	while (node)
	{
		printf("'%s': '%s'", node->key, node->value);

		if (node->snext)
			printf(", ");
		node = node->snext;
	}

	printf("}\n");

}

/**
 * shash_table_print_rev - Prints an ordered hash table in reverse
 *
 * @ht: Ordered hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (!ht)
		return;

	node = find_tail_node(ht);

	printf("{");

	while (node)
	{
		printf("'%s': '%s'", node->key, node->value);

		if (node->sprev)
			printf(", ");
		node = node->sprev;
	}

	printf("}\n");
}

/**
 * shash_table_delete - Deletes an hash table
 *
 * @ht: Hash table
 *
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *node, *temp;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node)
		{
			temp = node;
			node = node->next;

			free(temp->key);
			free(temp->value);
			free(temp);

		}
	}

	free(ht->array);
	free(ht);
}
