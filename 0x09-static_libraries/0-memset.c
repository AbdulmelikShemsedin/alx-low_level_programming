#include "main.h"

/**
 * _memset - My main func goes here
 * @s: destination
 * @b: byte
 * @n: bytes num
 * Return: @s if succeed
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
