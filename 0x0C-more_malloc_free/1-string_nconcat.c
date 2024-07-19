#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first str
 * @s2: the second str
 * @n: bytes of s2
 * Return: the newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0, b = 0, c = 0, d = 0;
	char *newStr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[a])
		a++;
	while (s2[c])
		c++;
	if (n >= c)
	{
		d = a + c;
	}
	else
	{
		d = a + n;
	}
	newStr = malloc(sizeof(char) * d + 1);
	if (newStr == NULL)
		return (NULL);
	c = 0;
	while (b < d)
	{
		if (b <= a)
			newStr[b] = s1[b];
		if (b >= a)
		{
			newStr[b] = s2[c];
			c++;
		}
		b++;
	}
	newStr[b] = '\0';
	return (newStr);
}
