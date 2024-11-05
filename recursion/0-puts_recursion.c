#include <string.h>
#include <stdio.h>
#include "main.h"
/**
*_puts_recursion- Prints a string in a recursive call
*@s: string to print
*Return: nothing (void)
*/
void _puts_recursion(char *s)
{
if (s == NULL || *s == '\0')
{
return;
}
_putchar(*s);
_puts_recursion(s + 1);
if (*s == '\0')
_putchar('\n');
}
