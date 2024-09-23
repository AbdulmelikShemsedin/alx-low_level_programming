#include "main.h"

/**
 * _strcmp - My main func goes here
 * @s1: pointer to first str
 * @s2: pointer to second str
 * Return: updated str
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
