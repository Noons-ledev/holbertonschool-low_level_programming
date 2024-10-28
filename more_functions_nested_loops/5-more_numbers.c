#include "main.h"
/**
 *more_numbers- print i times a
 *description: do it 
 *Return: Nothing (void)
 *
 */
void more_numbers(void)
{
int i;
int a;
for (i = 0; i <= 9; i++)
{
for (a = 0; a <= 14; a++)
{
if (a >= 10)
{
_putchar((a / 10) + '0');
}
_putchar((a % 10) + '0');
}
_putchar('\n');
}
}
