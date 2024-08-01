#include "lists.h"

/**
 * list_len - returns the number of elements of linked list
 * @h: the list
 *
 * Return: the number
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
