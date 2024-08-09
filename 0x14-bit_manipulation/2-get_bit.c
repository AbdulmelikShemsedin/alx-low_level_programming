#include "main.h"

/**
 * get_bit - returns the value of a bit at index
 * @n: the bit
 * @index: index of the bit
 * Return: value of a bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int no, c;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	no = 1 << index;
	c = n & no;
	if (c == no)
		return (1);
	return (0);
}
