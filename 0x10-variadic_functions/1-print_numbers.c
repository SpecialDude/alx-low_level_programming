#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - Prints Number
 *
 * @separator: Separator between numbers
 * @n: Number of args
 * @...: Optional Args
 *
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			if (separator == NULL)
				printf("%d", va_arg(ap, int));
			else
				printf("%d%s", va_arg(ap, int), separator);
		}
		else
		{
			printf("%d", va_arg(ap, int));
		}


	}

	va_end(ap);

	printf("\n");
}
