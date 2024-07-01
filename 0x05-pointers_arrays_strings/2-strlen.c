#include <stdio.h>

/**
 * _strlen - My main func goes here
 * @str: checker
 * Return: the length
 */
int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
	{
		length++;
	}
	return (length);
}
