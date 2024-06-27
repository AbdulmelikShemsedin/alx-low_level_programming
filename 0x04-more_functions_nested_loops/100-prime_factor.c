#include <stdio.h>
#include "main.h"

/**
 * main - My main function goes here
 *
 * Return: 0 if succeed
 */
int main(void)
{
	unsigned long int i, n = 012852475143;

	for (i = 3; i < 782849; i = i + 2)
	{
		while ((n % i == 0) && (n != i))
		{
			n = n / i;
		}
	}
	printf("%lu\n", n);
	return (0);
}
