#include "main.h"
#include <string.h>

/**
 * binary_to_uint - Converts binary chars to uint
 *
 * @b: binary chars
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = strlen(b);
	unsigned int number = 0;
	unsigned int i = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] == '1')
			number += powtwo(2, len - i - 1);

		else if (b[i] != '0')
			return (0);

		i++;

	}

	return (number);

}

/**
 * powtwo - Raises base to index power
 *
 * @base: base number
 * @index: index number
 *
 * Return: unsigned int
 */
unsigned int powtwo(unsigned int base, unsigned int index)
{
	if (index == 0)
		return (1);

	return (base << (index - 1));

}
