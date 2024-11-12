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
int a;
unsigned int product = nmemb * size;
if (size == 0 || nmemb == 0)
return (NULL);
void *array = (char *)malloc(product);
if (array == NULL)
return (NULL);
for (a = 0; a < product)
*(array + a) = 0;
return (array);
}
