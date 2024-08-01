#include "lists.h"
#include <stdlib.h>

/**
 * add_node - adds new node at the beginning of list
 * @head: first on the list
 * @str: the string
 * Return: adress of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (0);
	}
	new->str = str;
	new->next = *head;
	*head = new;

	return (new);
}
