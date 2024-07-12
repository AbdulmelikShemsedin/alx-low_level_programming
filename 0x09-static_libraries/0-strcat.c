#include "main.h"
#include <stdio.h>

/**
 * _strcat - My main func goes here
 * @dest: destination str
 * @src: source str
 * Return: a pointer
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, i;

	while (dest[a])
	{
		a++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[a] = src[i];
		a++;
	}

	dest[a] = '\0';
	return (dest);
}
