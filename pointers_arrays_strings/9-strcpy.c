#include "main.h"
/**
 *_strcpy- Cpy a string
 *@dest: buffer to fill
 *@src: buffer to copy
 *description: voila quoi
 *Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
char *ogdest = dest;
while (*src != 0)
{
*dest = *src;
src++;
dest++;
}
*dest = '\0';
return (ogdest);
}
