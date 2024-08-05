#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints elements in the list
 * @h: the list
 * Return: no of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
