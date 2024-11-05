#include <string.h>
#include <stdio.h>
#include "main.h"
/**
*_print_rev_recursion- Prints a string in a recursive call
*@s: string to print
*Return: nothing (void)
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
