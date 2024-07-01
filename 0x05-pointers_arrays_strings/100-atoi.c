#include "main.h"

/**
 * _atoi - My main func goes here
 * @s: checker
 * Return: the integer
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int b = 0;
	int a = 1;
	int d = 0;

	while (s[c])
	{
		if (s[c] >= 48 && s[c] <= 57)
		{
			a *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			d = 1;
			b = (b * 10) + (s[c] - '0');
			c++;
		}
		if (d == 1)
		{
			break;
		}
		c++;
	}
	b *= a;
	return (b);
}
