#include <stdio.h>

/**
 * swap_int - Smy main func geos here
 * @a: first to swap
 * @b: second to swap
 * Return: empty
 */
void swap_int(int *a, int *b)
{
	int s = *a;

	*a = *b;
	*b = s;
}
