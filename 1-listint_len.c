#include "lists.h"

/**
 * listint_len - return the no of element in list
 * @h: the list
 * Return: no of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
