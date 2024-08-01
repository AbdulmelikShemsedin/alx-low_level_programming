#include "lists.h"

/**
 * add_node - adds new node at the beginning of list
 * @head: first on the list
 * @str: the string
 * Return: adress of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (0);
	}
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
