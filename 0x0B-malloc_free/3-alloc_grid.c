#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocate a 2D Array
 *
 * @width: width of array
 * @height: height of array
 *
 * Return: int**
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	grid = malloc(sizeof(*grid) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(grid + i) = malloc(sizeof(**grid) * width);
		if (*(grid + i) == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			*(*(grid + i) + j) = 0;
		}
	}

	return (grid);
}
