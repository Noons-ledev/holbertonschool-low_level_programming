#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*sum_dlistint- returns the sum of all the data in a list
*@head: Pointer to the first node
*Return: The Sum
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
return (sum);
}
