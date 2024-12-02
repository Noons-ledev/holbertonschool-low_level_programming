#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*dlistint_len- Return nb of nodes in the list
*@h: Pointer to the first node
*Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
