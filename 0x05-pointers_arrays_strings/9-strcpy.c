#include "main.h"
#include <string.h>

/**
 * _strcpy - Make a copy of a string
 *
 * @dest: destination
 * @src: Source
 *
 * Return: dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(src, dest);

	return (dest);
}
