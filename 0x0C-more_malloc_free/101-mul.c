#include <stdlib.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _putstr - Prints a String
 *
 * @str: string to print
 */
void _putstr(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

}

/**
 * isalldigit - Check is string contains all digit
 *
 * @str: String
 *
 * Return: int
 */
int isalldigit(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	else
	{
		n1 = n;
	}

	if (n1 / 10)
	{
		print_number(n1 / 10);
	}

	_putchar((n1 % 10) + '0');
}

/**
 * main - Multiply two numbers
 * supplied in program's argument
 *
 * @ac: Number of arguments supplied
 * @av: Array of arguments
 *
 * Return: int
 */
int main(int ac, char *av[])
{
	if (ac != 3)
	{
		_putstr("Error\n");
		exit(98);
	}

	if (!(isalldigit(av[1]) && isalldigit(av[2])))
	{
		_putstr("Error\n");
		exit(98);
	}

	print_number(atoi(av[1]) * atoi(av[2]));
	_putchar('\n');

	return (EXIT_SUCCESS);
}
