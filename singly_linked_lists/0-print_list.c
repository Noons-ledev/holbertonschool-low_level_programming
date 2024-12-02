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
list_t *b = (list_t *)h;
size_t count = 0;
if (h == NULL)
return(-1);
while (b->next != NULL)
	{
	if (b->str == NULL)
	{
	b->str = "(nil)";
	b->len = 0;
	}
	printf("[%d] %s\n", b->len, b->str);
	count++;
	b = h->next;
	}
	printf("[%d] %s\n", b->len, b->str);
	count++;
	return(count);
}
