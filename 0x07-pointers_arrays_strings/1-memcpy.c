#include "main.h"

/**
 * _memcpy - My main func goes here
 * @dest: char to be returned
 * @src: source input
 * @n: num input
 * Return: @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
