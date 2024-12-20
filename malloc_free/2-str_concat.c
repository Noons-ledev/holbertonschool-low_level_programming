#include <stdlib.h>
#include "main.h"
/**
 *str_concat- Concatenate two strings using malloc
 *@s1: First string to concat
 *@s2: Second String to concat
 *Return: s3 or NULL
 */
char *str_concat(char *s1, char *s2)
{
char *s3;
unsigned int len1 = 0, len2 = 0, i = 0;
if (s1 != NULL)
{
while (s1[len1] != '\0')
{
len1++;
}
}
if (s2 != NULL)
{
while (s2[len2] != '\0')
{
len2++;
}
}
s3 = (char *)malloc((len1 + len2 + 1) * sizeof(char));
if (s3 == NULL)
return (NULL);
for (i = 0; i < len1; i++)
{
s3[i] = s1[i];
}
for (i = 0; i < len2; i++)
{
s3[len1 + i] = s2[i];
}
s3[len1 + len2] = '\0';
return (s3);
}
