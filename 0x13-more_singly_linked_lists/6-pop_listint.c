#include "lists.h"

/**
 * pop_listint - deletes the head node of list
 * @head: pointer to the head
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int new;

	if (*head == NULL)
		return (0);
	temp = *head;
	new = temp->n;
	*head = (*head)->next;
	free(temp);
	return (new);
}
