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
int a = 0;
if (src == NULL || dest == NULL || n <= 0)
{
return (dest);
}
else
{
for (a = 0; a < n && src[a] != '\0'; a++)
{
dest[a] = src[a];
}
for (a = a; a < n; a++)
{
dest[a] = '\0';
}
return (dest);
}
}
