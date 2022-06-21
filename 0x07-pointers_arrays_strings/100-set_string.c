#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: Pointer to a pointer of strings
 * @to: New String
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}