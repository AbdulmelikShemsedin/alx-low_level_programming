#include "lists.h"

/**
 * free_listint2 - frees a list and set head to null
 * @head: pointer to the head
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;


	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
