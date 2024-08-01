#include "lists.h"

/**
 * free_list - frees the list
 * @head: the element
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
