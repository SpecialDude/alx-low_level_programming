#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print Alphabet in lowercase
 *
 * Return: 0 Successful Execution
 *
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
