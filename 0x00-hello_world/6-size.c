#include <stdio.h>

/**
 * main - Prints the size of c primitive types
 *
 * Return: 0 if all statements execute successfully.
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)", sizeof(float));


	return (0);
}
