#include <stdlib.h>
#include "main.h"
/**
 *_strcat- concatenate two strings
 *@dest: String to modify
 *@src: string to copy
 *description: fait ce qui est ecrit
 *Return: pointeur vers le string dest
 */

char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
int a;
char *origin_dest = dest;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
j++;
}
dest = malloc((i + j) *sizeof(char) + 1);
for (a = 0; a < i; a++)
{
dest[a] = origin_dest[a];
}
while (*src != '\0')
{
dest[a] = *src;
a++;
src++;
}
dest[a] = '\0';
return (origin_dest);
}
