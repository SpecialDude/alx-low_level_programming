#include "main.h"

/**
 * _isalpha - Check if a character is an alphabet
 *
 * @c: character to check
 *
 * Return: 1 if true else 0
 */
int _isalpha(int c)
{
	return ((c > 64 && c < 91) || (c > 96 && c < 123));
}
