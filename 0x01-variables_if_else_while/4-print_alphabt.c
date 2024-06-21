#include <stdio.h>

/**
 * main - My main function goes here
 *
 * Return: 0 if succeed
 */
int main(void)
{
	char a = 'a';

	while
		(a <= 'z')
		{
			if ((a != 'q' && a != 'e') && a <= 'z')
			{
				putchar(a);
			}
			a++;
		}
	putchar('\n');
	return (0);
}
