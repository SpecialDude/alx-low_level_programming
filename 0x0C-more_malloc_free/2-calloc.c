#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocate memory and set to zero
 *
 * @nmemb: number of members
 * @size: size of each member
 *
 * Return: void*
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb < 1 || size < 1)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, nmemb * size);

	return (ptr);
}
