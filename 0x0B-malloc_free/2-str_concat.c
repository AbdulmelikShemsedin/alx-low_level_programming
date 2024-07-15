#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concats two strings
 * @s1: the first str to be concated
 * @s2: the second str to be concated
 * Return: the concated str
 */
char *str_concat(char *s1, char *s2)
{
unsigned int s1len, s2len, i;
char *str;

if (s2 == NULL && s1 == NULL)
{
return (NULL);
}

for (s1len = 0; s1[s1len] != '\0'; s1len++)
;
for (s2len = 0; s2[s2len] != '\0'; s2len++)
;
str = (char *)malloc((s1len + s2len + 1) * sizeof(char));
if (str == NULL)
{
return (NULL);
}
for (i = 0; i < s1len; i++)
{
str[i] = s1[i];
}
for (i = s1len; i <= (s2len + s1len); i++)
{
str[i] = s2[i - s1len];
}
return (str);
}
