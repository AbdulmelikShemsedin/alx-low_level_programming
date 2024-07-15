#include "main.h"
#include <stdlib.h>

/**
 * create_array - Returns a pointer to the array, or NULL if it fails
 * @size: arr size
 * @c: specific char for initialization
 * Return: NULL if size = 0: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{

unsigned int i;
char *arr;

if (size == 0)
return (0);
arr = (char *)malloc(size * sizeof(char));
for (i = 0; i < size; i++)
arr[i] = c;
return (arr);
}
