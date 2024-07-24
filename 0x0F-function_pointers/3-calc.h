#ifndef CALC_H
#define CALC_H

/**
 * struct op - struct for op
 * @op: operator
 * @f: associated func
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op-t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif