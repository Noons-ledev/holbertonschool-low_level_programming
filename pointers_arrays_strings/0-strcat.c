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
char *p = dest;
while (*p != '\0')
{
p++;
}
while (*src != '\0')
{
*p = *src;
p++;
src++;
}
return (dest);
}
