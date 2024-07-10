#include "main.h"

/**
 * _pow_recursion - My main func goes her
 * @x: value to multiply
 * @y: value multiply times
 * Return: multiplied value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
