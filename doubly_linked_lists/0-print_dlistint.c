#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*print_dlistint- Prints all elements of a list
*@h: Pointer to the first node
*Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;
while (h != NULL)
{
	printf("%d\n", h->n);
	count++;
	h = h->next;
}
return (count);
}
