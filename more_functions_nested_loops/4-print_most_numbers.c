#include "main.h"
/**
 *print_most_numbers- print 0 to 9 with/o 2 & 4
 *description: do it
 *Return: Nothing (void)
 *
 */

Void print_most_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
if (i != 2 || i != 4)
{
_putchar(i + '0');
}
}
_putchar('\n');
}
