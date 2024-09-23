#include <stdio.h>

/**
 * _strlen - My main func goes here
 * @s: checker
 * Return: the length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	{
		length++;
	}
	return (length);
}
