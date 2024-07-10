#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - My main func goes here
 * @n: checker
 * Return: value of int
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - My main func goes here
 * @n: checker
 * @i: no of iteration
 * Return: if prime 1: if not 0
 */
int check_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	return (check_prime(n, i + 1));
}
