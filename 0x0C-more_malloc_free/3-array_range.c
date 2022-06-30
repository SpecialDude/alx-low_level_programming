#include "main.h"
#include <stdlib.h>

/**
 * array_range - Get an array of range of number
 *
 * @min: Minimum number in the range
 * @max: Maximum number the range
 *
 * Return: int*
 */
int *array_range(int min, int max)
{
	int i = 0, size = max - min + 1;
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (; min <= max; min++)
	{
		ptr[i] = min;
		i++;
	}

	return (ptr);
}
