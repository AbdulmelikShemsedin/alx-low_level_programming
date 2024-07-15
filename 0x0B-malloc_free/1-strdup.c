#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  returns which is a duplicate of the string str
 * @str: checker str
 * Return: the copied str
 */
char *_strdup(char *str)
{
	char *newStr;
	int str_len, i = 0;

	for (; str[i] != '\0'; i++)
		str_len++;
	if (str == NULL)
	{
		return (NULL);
	}
	newStr = (char *)malloc((str_len + 1) * sizeof(char));
	if (newStr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (str_len + 1); i++)
		newStr[i] = str[i];
	return (newStr);
}
