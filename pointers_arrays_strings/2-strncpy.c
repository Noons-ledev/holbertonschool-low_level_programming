#include "main.h"
/**
 *
 *
 *
 *
 *
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
  int a;
  int src_length = 0;
  while ( src[src_length] != '\0')
    {
      src_length++;
    }
  for (a = 0; a < n && src[a] != '\0')
    {
      *dest = src[a];
      dest ++;
    }
  if (src_length < n)
    {
      *dest ='\0';
    }
  else
    {
      break;
    }
    
  
