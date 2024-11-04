#include <string.h>
#include <stdio.h>
#include "main.h"
/**
*_strchr- search for c char in s string
*@s: Area to process into
*@c: Search for that character
*Return: s or NULL
*/
char *_strchr(char *s, char c)
{
if (c == '\0')
return (s);
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return (NULL);
}
