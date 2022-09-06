#include "main.h"

/**
 * _memcpy - Copy Memory Data
 *
 * @dest: Destination Memory
 * @src: Source Memory
 * @n: Number of memory bytes to copy
 *
 * Return: Pointer to destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
