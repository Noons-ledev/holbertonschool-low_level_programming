#include "main.h"
/**
 *_strlen- compte la longueur
 *description: does it
 *@s: String to occur
 *Return: Value of length
 *
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
s++;
length++;
}
return (length);
}
