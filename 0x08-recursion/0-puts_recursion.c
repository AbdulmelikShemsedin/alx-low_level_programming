#include "main.h"

/**
 *_puts_recursion - My main func goes here
 * @s: checker string
 * void: prints
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
