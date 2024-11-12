#include <stdlib.h>
#include "main.h"
/**
 *_calloc- Fais calloc
 *@nmemb: number of elements
 *@size: Size of elements
 *Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int a;
unsigned int product = nmemb * size;
char *array;
if (size == 0 || nmemb == 0)
return (NULL);
array = malloc(product);
if (array == NULL)
return (NULL);
for (a = 0; a < product; a++)
*(array + a) = 0;
return (array);
}
