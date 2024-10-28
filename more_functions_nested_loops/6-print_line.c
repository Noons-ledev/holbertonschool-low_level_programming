#include "main.h"
/**
 *print_line- Print a _ line
 *@n: number of time to print _
*description: n times _
 *Return: nothing(void)
 *
 */
void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
if (n == 0 || n < 0)
{
_putchar('\n');
}
_putchar('_');
}
_putchar('\n');
}
