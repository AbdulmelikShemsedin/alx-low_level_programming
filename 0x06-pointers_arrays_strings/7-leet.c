#include "main.h"

/**
 * leet - My main func goes here
 * @n: input value
 * Return: value of n
 */
char *leet(char *n)
{
	int a, b;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (a = 0; n[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (n[a] == s1[b])
			{
				n[a] = s2[b];
			}
		}
	}
	return (n);
}
