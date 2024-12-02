#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*get_dnodeint_at_index- return a nth node of a linked list 
*@head: Pointer to the first node
*@index: Node to bring as return
*Return: Pointer to the concerned node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = head;
	if (head == NULL)
	return (NULL);
	for (; i < index; i++)
	{	
	if (temp->next == NULL)
	return (temp);
	temp = temp->next;
	}
	return (temp);
}
