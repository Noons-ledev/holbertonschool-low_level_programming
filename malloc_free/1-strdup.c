#include <stdlib.h>
#include "main.h"
/**
*_strdup- duplicate a string in a new string with allocated memory
*@str: String to duplicate
*Return: NULL or array pointer
*/
char *_strdup(char *str)
{
char *array;
unsigned int a = 0, b;
if (str == NULL)
return (NULL);
while (str[a] != '\0')
{
a++;
}
array = (char *)malloc((a + 1) * sizeof(char));
if (array == NULL)
return (NULL);
for (b = 0; b < a; b++)
{
array[b] = str[b];
}
array[b] = '\0';
return (array);
}
