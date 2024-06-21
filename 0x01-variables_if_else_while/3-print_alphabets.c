#include <stdio.h>

/**
 * main - My main function goes here
 *
 * Return: 0 if succeed
 */
int main(void)
{
	char a = 'a';

	char b = 'A';

	while
		(a <= 'z') {
			putchar(a);
			a++;
		}
	while
		(b <= 'Z') {
			putchar(b);
			b++;
		}
	putchar("\n");
	return (0);
}
