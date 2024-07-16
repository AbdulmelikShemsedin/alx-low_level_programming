#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a 2 dimensional array of integers
 * @width: the width of the array
 * @height: the height of the array
 * Return: the array; NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i, j;
int **arr;

if (width <= 0 || height <= 0)
{
return (NULL);
}
arr = (int **)malloc(sizeof(int) * (height));
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
arr[i] = malloc(width * sizeof(int));
if (arr[i] == NULL)
{
for (j = 0; j < i; j++)
free(arr[j]);
free(arr);
	return (NULL);
}
}
for (i = 0; i < height; i++)
{
	for (j = 0; j < width; j++)
	{
		arr[i][j] = 0;
	}
}
return (arr);
}
