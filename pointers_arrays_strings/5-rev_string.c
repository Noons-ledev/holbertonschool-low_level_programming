#include "main.h"
/**
 *rev_string- reverse a string
 *@s: points to the string
 *description: does it
 *Return: nothing
 *
 */
void rev_string(char *s)
{
char *start = s;
char temp;
while (*s)
{
s++;
}
s--;
while (start < s)
{
temp = *start;
*start = *s;
*s = temp;
s--;
start++;
}
}
