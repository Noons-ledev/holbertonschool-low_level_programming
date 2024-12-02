#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*list_len- prints all elements of a linked list
*@h: pointer of type list_t from which function gets called
*Return: Number of nodes
*/
size_t list_len(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
	count++;
	h = h->next;
}
return (count);
}
