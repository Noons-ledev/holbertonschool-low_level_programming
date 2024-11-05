#include <string.h>
#include <stdio.h>
#include "main.h"
/**
*_strlen_recursion- Prints a string in a recursive call
*@s: string to print
*Return: length of s
*/
int _strlen_recursion(char *s)
{
static int count;
int result;
if (*s == '\0')
{
result = count;
count = 0;
return (result);
}
count += 1;
return (_strlen_recursion(s + 1));
}
