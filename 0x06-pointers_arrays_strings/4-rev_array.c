#include "main.h"

/**
 * reverse_array - My main func goes here
 * @a: array of int to be reversed
 * @n: no of elements in array
 * void: reverses an array
 */
void reverse_array(int *a, int n)
{
	int c, b;

	for (b = n - 1; b >= n / 2; b--)
	{
		c = a[n - 1 - b];
		a[n - 1 - b] = a[b];
		a[b] = c;
	}
}
