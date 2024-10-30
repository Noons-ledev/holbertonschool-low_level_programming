#include "main.h"
/**
 *_strncat- concatenation of strings
 *description: does it
 *@dest: attend src here
 *@src: copy in dest
 *@n: number of characters to copy if src[n] != '\0'
 *Return: nothing
 */
char *_strncat(char *dest, char *src, int n)
{
int a;
char *p = dest;
while (*p != '\0')
{
p++;
}
for (a = 0; a < n && src[a] != '\0'; a++)
{
*p = src[a];
p++;
}
return (dest);
}
