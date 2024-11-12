#include <stdlib.h>
#include "main.h"
/**
*create_array- Creates an array of a given size and fills with a given char
*@size: Size of array
*@c: Char to fill in
*Return: NULL or array pointer
*/
char *create_array(unsigned int size, char c)
{
unsigned int a;
char *array = (char *)malloc(size * sizeof(char));
if (size == 0)
return (NULL);
if (array == NULL)
return (NULL);
for (a = 0; a < size; a++)
{
array[a] = c;
}
return (array);
}
