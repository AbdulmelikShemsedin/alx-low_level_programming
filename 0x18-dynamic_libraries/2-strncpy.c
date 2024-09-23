#include "main.h"
#include <stdio.h>

/**
 * _strncpy - My main func goes here
 * @dest: buffer copy
 * @src: source str
 * @n: max no of bytes
 * Return: a pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, a = 0;

	while (src[index++])
	{
		a++;
	}

	for (index = 0; src[index] && index < n; index++)
	{
		dest[index] = src[index];
	}

	for (index = a; index < n; index++)
	{
		dest[index] = '\0';
	}

	return (dest);
}
