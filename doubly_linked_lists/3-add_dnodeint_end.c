#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*add_dnodeint_end- add a node at the end of the list
*@head: Pointer to the first node
*@n: int element in the struct
*Return: pointer to the new element
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	return (NULL);
new->next = NULL;
new->n = n;
if (*head == NULL)
{
	*head = new;
	new->prev = NULL;
	return (new);
}
if ((*head)->next == NULL)
{
temp->next = new;
new->prev = temp;
}
else
{
while (temp->next != NULL)
{
	temp = temp->next;
}
temp->next = new;
new->prev = temp;
}
return (new);
}
