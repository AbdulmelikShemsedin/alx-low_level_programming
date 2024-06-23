#include <stdio.h>
#include <unistd.h>

/**
 * main - My main function goes here
 *
 * Return: 0 if succeed
 */

int main(void)
{
	write(2,
			"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
