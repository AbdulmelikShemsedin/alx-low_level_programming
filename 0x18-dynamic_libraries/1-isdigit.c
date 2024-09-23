#include "main.h"

/**
 * _isdigit - My main func goes here
 * @c: checker
 * Return: 1 if digit: 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
