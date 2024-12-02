#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*insert_dnodeint_at_index- Inserts a node at a given index in list
*@h: Pointer to the first node
*@idx: Where to create node in the list
*@n: int element of the node
*Return: Pointer to the concerned node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	unsigned int i = 0;
	dlistint_t *new;
/**Si on demande de créer une node et une liste via idx 0 */
	if (idx == 0)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
		return (NULL);
		new->n = n;
		new->prev = NULL;
		new->next = *h;
	/**Si la liste existait deja et qu'on demande idx 0*/
		if (*h != NULL)
		(*h)->prev = new;
	*h = new;
	return (new);
	}
	/**Si la liste et les index existent déjà*/
	for (; i < idx - 1 ; i++)
	{
		if (temp == NULL)
		return (NULL);
		temp = temp->next;
	}
new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	return (NULL);
new->n = n;
	if (temp == NULL)
	return (NULL);
		new->prev = temp;
		if (temp->next != NULL)
		temp->next->prev = new;
		new->next = temp->next;
		temp->next = new;
	
return (new);
}
