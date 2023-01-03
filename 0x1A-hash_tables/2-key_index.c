#include "hash_tables.h"

/**
 * key_index - Returns the index value of a key in an array
 *
 * @key: string value
 * @size: size of array
 *
 * Return: unsigned long int (index)
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
