#include "main.h"

/**
 * string_toupper - Change lowercases to uppercases
 *
 * @c: String
 *
 * Return: Pointer to string
 */
char *string_toupper(char *c)
{
    int i = 0;

    while (*(c + i) != '\0')
    {
        if (*(c + i) >= 'a' && *(c + i) <= 'z')
        {
            *(c + i) = (char)((int)*(c + i) - 32);
        }
        i++;
    }

    return (c);
}