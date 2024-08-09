#include "main.h"

/**
 * print_binary - prints the binary rep of no
 * @n: the no
 */
void print_binary(unsigned long int n)
{
	unsigned long int no = 1, a, c;
	char b = 0;

	for (a = 1; a <= (sizeof(unsigned long int) * 8 - 1); a++)
		no *= 2;
	while (no != 0)
	{
		c = n & no;
		if (c == no)
		{
			b = 1;
			_putchar('1');
		}
		else if (b == 1 || no == 1)
			_putchar('0');
		no >>= 1;
	}
}
