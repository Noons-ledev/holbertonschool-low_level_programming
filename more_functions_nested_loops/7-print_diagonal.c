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
for (i = 0; i <= n; i++)
{
for (a = i + 1; a <= n; a++)
{
if (n == 0 || n < 0)
{
_putchar('\n');
}
_putchar('\\');
}
_putchar('\n');
_putchar(i * ' ');
}
}
      
