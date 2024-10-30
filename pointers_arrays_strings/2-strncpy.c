#include "main.h"
/**
 *_strncpy- cpy a string like strncpy
 *@dest:Where to copy
 *@src: String to copy
 *@n: number of characters to copy
 *description: does it 
 *Return: nothing
 */
char *_strncpy(char *dest, char *src, int n)
{
int a;
int src_length = 0;
while ( src[src_length] != '\0')
{
src_length++;
}
for (a = 0; a < n && src[a] != '\0';a++)
{
*dest = src[a];
dest ++;
}
if (src_length < n)
{
*dest ='\0';
}
}
  
