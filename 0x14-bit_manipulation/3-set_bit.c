#include "main.h"

/**
 * set_bit - Set the bit at index to 1 in n
 *
 * @n: number
 * @index: bit index
 *
 * Return: 1 if success otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
