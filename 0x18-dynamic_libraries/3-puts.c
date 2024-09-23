#include "main.h"

/**
 * _puts - My main func goes here
 * @s: checker char
 * Return: empty
 */
void _puts(char *s)
{
	for (; *s != '\0'; s++)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
