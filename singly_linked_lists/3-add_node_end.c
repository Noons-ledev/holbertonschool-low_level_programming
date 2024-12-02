#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*_strlen- determines the length of a string
*@str: String to count length
*Return: Length
*/
size_t _strlen(const char *str)
{
	size_t i = 0;

	if (str == NULL)
	return (0);
while (str[i])
{
	i++;
}
return (i);
}

/**
*add_node_end- Adds a node at the end of a linked list
*@head: pointer to first node
*@str: String element in the node
*Return: Number of nodes
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *temp = *head;
list_t *new = malloc(sizeof(list_t));
	if (new == NULL)
	return (NULL);
new->str = strdup(str);
new->len = _strlen(str);
new->next = NULL;
if (*head == NULL)
*head = new;
else
{
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new;
}
return (new);
}
