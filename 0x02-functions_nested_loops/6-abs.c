#include "main.h"

/**
 * _abs - My main function goes here
 *
 * Return: abs if succeed: c otherwise
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs;

		abs = c * -1;
		return (abs);
	}
	return (c);
}
