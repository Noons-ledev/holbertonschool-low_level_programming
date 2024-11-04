#include <string.h>
#include <stdio.h>
#include "main.h"
/**
*_strspn- Compute length of s with chars from accept
*@s: Area to process
*@accept: chars to match with
*Return: the count
*/
unsigned int _strspn(char *s, char *accept)
{
int match_found = 1;
int a, b, count = 0;
int found;
for (a = 0; s[a] != '\0'; a++)
{
found = 0;
if (!match_found)
break;
for (b = 0; accept[b] != '\0'; b++)
{
if (s[a] == accept[b])
{
count += 1;
found = 1;
break;
}
}
if (found == 0)
{
match_found = 0;
break;
}
}
return (count);
}
