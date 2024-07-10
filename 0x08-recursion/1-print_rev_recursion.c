#include "main.h"

/**
 * _print_rev_recursion - My main func goes here
 * @s: checker
 * void: prints string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
