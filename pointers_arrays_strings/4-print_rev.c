#include "main.h"
/**
 *print_rev-prints in reverse the string
 *@s: Points to the string
 *description: does it
 *Return: voila
 *
 */

void print_rev(char *s)
{
char str;
while (*s)
{
s++;
}
s--;
while (*s >= str)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
