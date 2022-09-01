#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - Sum all Integer arguments to the function
 *
 * @n: Number of Optional arguments supplied
 * @...: optional arguments
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
