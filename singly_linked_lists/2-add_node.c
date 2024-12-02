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
*add_node- Adds a node to the list
*@head: pointer to first node
*@str: String element in the structure
*Return: pointer to the new node
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
new->len = _strlen(str);
new->next = *head;
*head = new;
return (new);
}
