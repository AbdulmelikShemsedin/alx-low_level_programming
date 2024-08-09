#include <unistd.h>

/**
 * _putchar - is the function
 *
 * Return: 0 if succeed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
