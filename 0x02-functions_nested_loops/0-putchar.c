#include "main.h"
#include <unistd.h>

/**
 * _putchar - My main function goes here
 *
 * Return: 0 if succeed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
