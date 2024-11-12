#include <stdlib.h>
#include "main.h"
/**
 *string_nconcat- Concatenate two strings up to n chars in the second one
 *@s1: First string
 *@s2: Second one
 *@n: numbers of elements in the second string
 *Return: Pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s3;
unsigned int len_s1 = 0, len_s2 = 0, a;
if (s1 != NULL)
{
while (s1[len_s1] != '\0')
len_s1++;
}
if (s2 != NULL)
{
while (s2[len_s2] != '\0')
len_s2++;
}
if (len_s2 > n)
{
len_s2 = n;
}
s3 = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
if (s3 == NULL)
return (NULL);
for (a = 0; a < len_s1; a++)
{
s3[a] = s1[a];
}
for (a = 0; a < len_s2 ; a++)
{
s3[a + len_s1] = s2[a];
}
s3[len_s1 + len_s2] = '\0';
return (s3);
}
