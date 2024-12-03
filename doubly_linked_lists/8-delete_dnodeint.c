#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*delete_dnodeint_at_index- deletes a node at a given index in list
*@head: Pointer to the first node
*@index: node to delete in the list
*Return: Pointer to the concerned node
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int i;
dlistint_t *temp = *head;
/**début de liste*/
	if (*head == NULL)
	return (-1);
	if (index == 0)
	{
		if (*head != NULL)
		{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(temp);
		return (1);
		}
		return (-1);
	}
/**Aller jusqu'a l'index en question*/
	for (i = 0; i < index; i++)
	{
		if (temp == NULL)
		return (-1);
		temp = temp->next;
	}
/**si c'est la fin de la liste, mettre a jour le next de la node d'avant*/
	if (temp->next == NULL)
	{
		temp->prev->next = NULL;
		free(temp);
	}
/**Si ce n'est pas end/list, mettre a jour prev/next des nodes autour*/
	else
	{
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
		free(temp);
	}
	return (1);
}
