#include <stdio.h>
#include "main.h"

/**
 * _strchr - My main func goes here
 * @s: input
 * @c: input
 * Return: null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (0);
}
