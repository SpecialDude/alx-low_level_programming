#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Print a list of argument using the
 * specified format
 *
 * @format: Format for printing
 * @...: Optional Args;
 *
 * Return: Void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, i_arg;
	char f;
	char c_arg;
	double f_arg;
	char *s_arg;

	va_start(ap, format);
	while (format[i])
	{
		f = format[i++];
		switch (f)
		{
		case 'c':
			c_arg = va_arg(ap, int);
			printf("%c", c_arg);
			break;
		case 'i':
			i_arg = va_arg(ap, int);
			printf("%d", i_arg);
			break;

		case 'f':
			f_arg = va_arg(ap, double);
			printf("%g", f_arg);
			break;

		case 's':
			s_arg = va_arg(ap, char *);
			if (s_arg == NULL)
				s_arg = "(nill)";
			printf("%s", s_arg);
			break;
		default:
			break;
		}
	}

	va_end(ap);
	printf("\n");
}
