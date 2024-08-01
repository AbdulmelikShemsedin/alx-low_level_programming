#include "lists.h"

/**
 * add_node_end - adds new node at the end of list
 * @head: first of the list
 * @str: the string
 * Return: adress of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	char newstr = str;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (0);
	}
	new->str = newstr;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
