#include "main.h"

/**
 * _abs - My main function goes here
 * @n: used for checking
 * Return: abs if succeed: c otherwise
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs;

		abs = n * -1;
		return (abs);
	}
	return (n);
}
