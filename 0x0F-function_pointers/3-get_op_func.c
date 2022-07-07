#include "function_pointers.h"
#include <string.h>
#include <stdlib.h>

/**
 * get_op_func - Get the op func object
 *
 * @s: symbol of the operator
 *
 * Return: int(*)(int, int)
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[]  = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (ops[i].f);
}
