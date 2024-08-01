#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list
 * @h: the list
 * Return: no of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;
	
	while (h)
	{
		printf("%d\n", h->len);
		num++;
		h = h->next;
	}

	return (num);
}
