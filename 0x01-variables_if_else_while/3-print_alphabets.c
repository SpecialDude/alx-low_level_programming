#include <stdio.h>

/**
 * main - Print alphabets in Uppercase and Lowercase
 *
 * Return: 0 Success
 *
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}