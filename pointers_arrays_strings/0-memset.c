#include <string.h>
#include <stdio.h>
#include "main.h"
/**
*_memset- Fills n bytes of memory area
*@s: Area to process
*@b: Fill with that constant char
*@n: Fill all n bytes
*Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
if (n == 0 || s == NULL)
return (s);
for (a = 0; a < n; a++)
{
s[a] = b;
}
return (s);
}
