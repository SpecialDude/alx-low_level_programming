#include <stdlib.h>
#include <time.h>
/* more headers goes there */


/*
 * main - Check if a random number is positive, zero or negative
 * 
 * Return: 0 Success
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
		printf("%d is  positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n");

	return (0);
}
