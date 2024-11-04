#include <string.h>
#include <stdio.h>
#include "main.h"
/**
*_memcpy- cpy src to dest for n bytes
*@dest: Area to fill by copying
*@src: Area to copy
*@n: Fill all n bytes
*Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;
if (dest == NULL || src == NULL || n == 0)
return (dest);
for (a = 0; a < n; a++)
{
dest[a] = src[a];
}
return (dest);
}
