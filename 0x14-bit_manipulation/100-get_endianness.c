#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian; 1 if little
 */
int get_endianness(void)
{
	int i;
	char *a;

	i = 1;
	a = (char *)&i;
	return (*a);
}
