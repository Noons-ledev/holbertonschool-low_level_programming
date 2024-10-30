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
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
j++;
}
char *origin_dest = malloc((i + j + 1) *sizeof(char));
for (a = 0; a < i; a++)
{
origin_dest[a] = dest[a];
}
while (*src != '\0')
{
origin_dest[a] = *src;
a++;
src++;
}
origin_dest[a] = '\0';
return (origin_dest);
}
