#include "main.h"
/**
 *puts_half- prints half of the string depending on its length
 *@str: pointer used
 *Description: voila voila
 *Return: nothing
 */

void puts_half(char *str)
{
int length = 0;
char *start = str;
while (*str != '\0')
{
str++;
length++;
}
if (length % 2 != 0)
{
char *mid = start + ((length - 1) / 2) + 1;
while (*mid != '\0')
{
_putchar(*mid);
mid++;
}
_putchar('\n');
}
else if (length % 2 == 0)
{
char *mid1 = start + ((length - 1) / 2) + 1;
while (*mid1 != '\0')
{
_putchar(*mid1);
mid1++;
}
_putchar('\n');
}
}
