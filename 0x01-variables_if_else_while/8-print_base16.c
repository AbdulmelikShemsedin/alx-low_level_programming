#include <stdio.h>

/**
 * main - My main function goes here
 *
 * Return: 0 if succeed
 */
int main(void)
{
	char a = 'a';
	int b = 0;

	while
		(b < 10)
		{
			putchar(b + '0');
			b++;
		}
	while
		(a <= 'f')
		{
			putchar(a);
			a++;
		}
	putchar('\n');
	return (0);
}
