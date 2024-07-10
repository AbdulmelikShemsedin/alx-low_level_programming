#include "main.h"

/**
 * _strlen_recursion - My main func goes here
 * @s: string count
 * Return: the value
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
