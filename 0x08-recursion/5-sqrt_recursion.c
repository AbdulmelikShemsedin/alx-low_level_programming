#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - My main func goes here
 * @n: calculator of sqr root
 * Return: sqr root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - My main func goes here
 * @n: salculator of sqrt
 * @i: no of iteration
 * Return: sqrt
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}
	if (sqrt == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
