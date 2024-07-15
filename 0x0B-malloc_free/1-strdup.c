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

	if (str == NULL)
	{
		return (NULL);
	}
	newStr = (char *)malloc(sizeof(str));
	if (newStr == NULL)
	{
		return (NULL);
	}
	newStr = str;
	return (newStr);
}
