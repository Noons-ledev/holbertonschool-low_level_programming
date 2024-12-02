#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*print_list- prints all elements of a linked list
*@h: pointer of type list_t from which function gets called
*Return: Number of nodes 
*/
size_t print_list(const list_t *h)
{
unsigned int count = 0;
while (h->next != NULL)
	{
	if (h->str == NULL)
	h->str = "[0] (nil)";
	printf("[%d] %s\n", h->len, h->str);
	count++;
	h = h->next;
	}
	return(count);
}