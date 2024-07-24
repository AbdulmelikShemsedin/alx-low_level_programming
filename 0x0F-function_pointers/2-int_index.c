#include "function_pointers.h"

/**
 * int_index -searches for integer
 * @size: no of elements in the array
 * @cmp: pointer to the func
 * @array: array
 * Return: If no element matches, return -1; If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
