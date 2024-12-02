#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*add_dnodeint- add a node at the beginning of the list
*@head: Pointer to the first node
*@n: int element in the struct
*Return: pointer to the new element
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	return (NULL);
new->prev = NULL;
new->next = *head;
new->n = n;
if (*head != NULL)
{
(*head)->prev = new;
}
*head = new;
return (new);
}

