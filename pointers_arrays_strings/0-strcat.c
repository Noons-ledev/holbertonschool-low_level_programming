#include <stdlib.h>
#include "main.h"
/**
 *
 *
 *
 *
 *
 */

char *_strcat(char *dest, char *src)
{
  int i = 0;
  int j = 0;
  while (dest[i] != '\0')
    {
      i++;
    }
  while (src[j] != '\0')
    {
      j++;
    }
  dest = malloc((i + j) * sizeof(char) + 1);
  char *origin_dest = dest;
  while (*dest != 0)
    {
      
