#include "main.h"
/**
 *leet- Changes string value for matching chars
 *@s: String to examine
 *description: Changes matching patterns
 *Return: s
 */
char *leet(char *s)
{
int a, b = 0;
char *toreplace = "4433007711";
char *tochange = "aAeEoOtTlL";
for (a = 0; s[a] != '\0'; a++)
{
for (b = 0; tochange[b] != '\0'; b++)
{
if (tochange[b] == s[a])
{
s[a] = toreplace[b];
}
}
}
return (s);
}
