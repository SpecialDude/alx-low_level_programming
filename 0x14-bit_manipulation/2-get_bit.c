#include "main.h"

/**
 * get_bit - Returns bit value at a given index in n
 *
 * @n: Number
 * @index: bit index
 *
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
