#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stddef.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int _putchar(int ch);

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

/**
 * struct op - A structure for Operation
 *
 * @op: Str rep of an operation (Symbol)
 * @f: Function which does the operation
 *
 * Description: This struct is to keep the symbol
 * of an operation and it's function which perfo-
 * ms the operation.
 */
typedef struct op
{
	char *op;
	int (*f)(int, int);
} op_t;

#endif
