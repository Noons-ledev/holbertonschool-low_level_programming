#include "main.h"
/**
 *print_diagonal-print a diagonal of \
 *@n : number of times printing n
 *description: do it
 *Return: nothing (void)
 */
void print_diagonal(int n)
{
int i;
int a;
if ( n == 0 || n < 0)
{
_putchar('\n');
}
else
{
for (i = 0; i <= n; i++)
{
for (a = 0; a <= i; a++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
