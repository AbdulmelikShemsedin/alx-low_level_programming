#include "main.h"
#include <stdio.h>

/**
 * print_array - My main func goes here
 * @a: Array
 * @n: no of elements
 * void: print
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
