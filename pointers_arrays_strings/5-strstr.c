#include <string.h>
#include <stdio.h>
#include "main.h"
/**
*_strstr- Finds a match between a string and substring
*@haystack: Area to process
*@needle: Find match with this pattern
*Return: s
*/
char *_strstr(char *haystack, char *needle)
{
int a, b;
if (*needle == 0)
return (haystack);
for (a = 0; haystack[a] != '\0'; a++)
{
for (b = 0; needle[b] != '\0'; b++)
{
if (needle[b] != haystack[a + b])
{
break;
}
if (needle[b + 1] == '\0')
return (haystack + a);
}
}
return (NULL);
}
