#include "main.h"

/**
 * set_bit - sets the value of bit to 1
 * @n: the value
 * @index: the index
 * Return: 1 if worked
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n |= (1UL << index);
	return (1);
}
