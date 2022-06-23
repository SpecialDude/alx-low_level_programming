#include "main.h"

/**
 * is_palind - Check if a string is palindrome
 *
 * @s: String
 * @i: start index
 * @l: length f string
 *
 * Return: int
 */
int is_palind(char *s, int i, int l)
{
	if (*(s + i) != *(s +  - 1))
		return (0);
	if (i >= l)
		return (1);
	return (is_palind(s, i + 1, l - 1));
}

/**
 * _strlen_recursion - Length of a string recursively
 *
 * @s: String
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(++s));
	}
}

/**
 * is_palindrome - Check if a string is palindrome
 *
 * @s: string
 *
 * Return: int
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (is_palind(s, 0, _strlen_recursion(s)));
}
