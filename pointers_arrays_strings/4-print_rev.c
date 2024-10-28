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
char *start = s;
while (*s)
{
s++;
}
s--;
while (s >= start)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
