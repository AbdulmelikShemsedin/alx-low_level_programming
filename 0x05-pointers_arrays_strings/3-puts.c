#include "main.h"

/**
 * _puts - My main func goes here
 * @str: checker char
 * Return: empty
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
