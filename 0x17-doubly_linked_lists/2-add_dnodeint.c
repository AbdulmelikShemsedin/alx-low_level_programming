#include "lists.h"

/**
 * add_dnodeint - adds new node to beginning
 * @head: the list
 * @n: value to add
 * Return: the new list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t));
dlistint_t *h;

h = *head;

if (new == NULL)
return (NULL);
new->n = n;
new->prev = NULL;
if (h != NULL)
{
while (h->prev != NULL)
    h = h->prev;
}
new->next = h;
if (h != NULL)
h->prev = new;
*head = new;
return (new);
}
