#include "main.h"
#include <string.h>
/**
 *cap_string-capitalize each word of a string
 *@s: string to work on
 *description: does it
 *Return: s
 */
char *cap_string(char *s)
{
int j;
int foundchar;
const char *special_chars = ",;.!?\"(){} \t\n";
int i = 0;
if (s[0] >= 'a' && s[0] <= 'z')
{
s[0] = s[0] - 32;
}
while (s[i] != '\0')
{
foundchar = 0;  
for (j = 0; special_chars[j] != '\0'; j++)
{
if (s[i] == special_chars[j])
{
foundchar = 1;
break;
}
}
if (foundchar)
{
if (s[i + 1] != '\0' && s[i+1] >= 'a' && s[i+1] <= 'z')
{
s[i+1] = s[i+1] - 32;
}
}
i++;
}
return (s);
}
