#include "main.h"

/**
 * _strlen_recursion - My main func goes here
 * @s: str
 * Return: str length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * comparator - compares chars of the str
 * @s: str
 * @n1: small iterator
 * @n2: big iterator
 * Return: 0 if succeed
 */
int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
		{
			return (1);
		}
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - My main func goes here
 * @s: str
 * Return: if palindrome 1: if not 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
