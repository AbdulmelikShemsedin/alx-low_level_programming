#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - adds numbers
 * @a: first no
 * @b: second no
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts nos
 * @a: first no
 * @b: second no
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies nos
 * @a: first no
 * @b: second no
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides nos
 * @a: first no
 * @b: second no
 * Return: a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - find remainder of nos
 * @a: first no
 * @b: second no
 * Return: a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
