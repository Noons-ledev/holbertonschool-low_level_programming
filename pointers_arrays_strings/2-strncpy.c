#include "main.h"
#include <stddef.h>
/**
 *_strncpy- cpy a string like strncpy
 *@dest:Where to copy
 *@src: String to copy
 *@n: number of characters to copy
 *description: does it 
 *Return: nothing
 */
char *_strncpy(char *dest, char *src, int n)
{
if (src == NULL)
{
return NULL;
}
int a = 0;
for (a = 0; a < n ;a++)
{
if (src[a] != '\0')
{
dest[a] = src[a];
}
else
{
break;
}
}
if (a < n)
{
dest[a] ='\0';
}
return (dest);
}
  
