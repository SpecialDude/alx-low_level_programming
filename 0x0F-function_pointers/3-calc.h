#ifndef CALC_H
#define CALC_H
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
