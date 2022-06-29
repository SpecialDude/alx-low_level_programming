#include "main.h"
#include "stdlib.h"

/**
 * create_array - Create an Array Object
 *
 * @size: size of the array
 * @c: Character value to initialize the array
 *
 * Return: char* or void* (if size is 0)
 */
char *create_array(unsigned int size, char c)
{
	char * arr;
	unsigned int i;

	if (size < 1)
		return (NULL);

	arr = malloc(sizeof(*arr) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		*(arr + i) = c;
	}

	return (arr);
}
