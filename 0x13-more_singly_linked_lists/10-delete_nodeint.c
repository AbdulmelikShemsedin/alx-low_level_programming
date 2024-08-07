#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t
 * @head: double pointer to the head of the list
 * @index: index of the node that should be deleted, starting at 0
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp = *head;
listint_t *prev = NULL;
unsigned int i;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = temp->next;
free(temp);
return (1);
}

for (i = 0; temp != NULL && i < index; i++)
{
prev = temp;
temp = temp->next;
}

if (temp == NULL)
return (-1);

prev->next = temp->next;
free(temp);

return (1);
}
