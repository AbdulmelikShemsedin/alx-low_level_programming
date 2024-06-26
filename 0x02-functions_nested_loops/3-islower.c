#include "main.h"
#include <ctype.h>

/**
 * _islower - My main function goes here
 * @c: checking character
 * Return: 1 if c is lowercase: 0 otherwise
 */
int _islower(int c)
{
	char a = c;

	if (c >= 97 && a == tolower(a))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
