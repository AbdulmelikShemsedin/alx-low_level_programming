#include "main.h"

/**
 * string_toupper - My main func goes here
 * @str: checker
 * Return: pointer to str
 */
char *string_toupper(char *str)
{
	int a = 0;

	while (str[a])
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		str[a] -= 32;
		a++;
	}
	return (str);
}
