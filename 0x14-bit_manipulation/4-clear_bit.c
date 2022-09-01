#include "main.h"

/**
 * clear_bit - Set the bit at index to 0 in n
 *
 * @n: Pointer to number
 * @index: bit index
 *
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
