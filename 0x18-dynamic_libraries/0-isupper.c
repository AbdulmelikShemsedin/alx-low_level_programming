#include "main.h"

/**
 * _isupper - Check if a letter is upper
 * @c: checking var
 * Return: 1 if upper: 0 if lower
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
