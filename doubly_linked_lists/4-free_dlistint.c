#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*free_dlistint- Frees all nodes of the list
*@head: Pointer to the first node
*Return: nothing void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}