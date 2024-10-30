#include "main.h"
/**
 *
 *
 *
 *
 *
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
*p = src[a]
p++;
}
return (dest);
}
