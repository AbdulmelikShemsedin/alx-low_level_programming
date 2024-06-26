#include "main.h"

/**
 * main - My main function goes here
 *
 * Return: 0 if succeed
 */
int print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
