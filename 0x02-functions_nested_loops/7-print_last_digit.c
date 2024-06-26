#include "main.h"

/**
 * print_last_digit - My main function goes here
 * @c: checker variable
 * Return: value of last digit
 */
int print_last_digit(int c)
{
	int a = c % 10;

	if (a < 0)
	{
		a = a * -1;
	}
	_putchar(a + a);
	return (a);
}
