#include "main.h"

/**
 * flip_bits - Returns the number of bit flips required to
 * get from n to m
 *
 * @n: Integer number
 * @m: Integer Number
 *
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int xor = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = xor >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
