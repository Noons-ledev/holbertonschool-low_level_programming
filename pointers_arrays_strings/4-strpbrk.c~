#include <string.h>
#include <stdio.h>
#include "main.h"
/**
*_strpbrk- Return first matching char of s string
*@s: Area to process
*@accept: ref pattern
*Return: s or NULL
*/
char *_strpbrk(char *s, char *accept)
{
int b = 0;
while (*s)
{
for (b = 0; accept[b] != '\0'; b++)
{
if (*s == accept[b])
{
return (s);
}
}
s++;
}
return (NULL);
}
