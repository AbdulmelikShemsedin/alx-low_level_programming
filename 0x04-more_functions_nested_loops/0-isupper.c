#include "main.h"

/**
 * _isupper - Check if a letter is upper
 * @x: checking var
 * Return: 1 if upper: 0 if lower
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
