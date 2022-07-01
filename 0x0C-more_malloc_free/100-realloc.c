#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _min - Minimum of two numbers
 *
 * @a: First Number
 * @b: Second Number
 *
 * Return: unsigned int (minimum)
 */
unsigned int _min(unsigned int a, unsigned int b)
{
	if (a < b)
		return (a);
	return (b);
}

/**
 * _realloc - Reallocate memory space
 *
 * @ptr: Soon to be old memory pointer
 * @old_size: It's size
 * @new_size: Well,
 *
 * Return: void*
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;

	if (old_size == new_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	newptr = malloc(new_size);

	if (newptr != NULL)
		memcpy(newptr, ptr, _min(old_size, new_size));

	if (ptr != NULL)
		free(ptr);

	return (ptr);
}
