#include "main.h"
/**
 *puts2- prints 1 on 2 char of a string
 *@str: points to the first element of the string
 *description: does it
 *Return: nothing
 */
void puts2(char *str)
{

while (*str != '\0')
{
_putchar(*str);
if ((*str + 1) != '\0')
{
str++ ;
}
str++;
}
_putchar('\n');
}
