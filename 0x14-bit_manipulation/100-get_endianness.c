#include "main.h"

/**
 * get_endianness - Checks for endiannes
 *
 * Return: int
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
