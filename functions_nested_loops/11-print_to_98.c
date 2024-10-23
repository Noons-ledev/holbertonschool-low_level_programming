#include "main.h"
/**
 *paint_to_98 - print all until 98
 *@n : Printing starts here
 *Description: According to given number
 *Return: Always 0 (success)
 *
 */
void print_to_98(int n)
{
_putchar((n / 100) + '0');
_putchar(((n / 10) /10) + '0');
_putchar((n % 10) + ' ');
if ( n > 98)
{
while ( n > 98)
{
int n1 = n - 1;
_putchar((n1 / 100) + '0');
_putchar(((n1 / 10) /10) + '0');
_putchar((n1 % 10) + ' ');
n--;
}
}
else if (n < 98)
{
while ( n < 98)
{
int n2 = n + 1;
if ( n < 0)
{
_putchar('-')
_putchar((n2 / 100) + '0');
_putchar((n2 / 10) + '0');
_putchar((n2 % 10) + ' ');
}
else
{
_putchar((n2 / 10) + '0');
_putchar((n2 % 10) + ' ');
n++;
}
}
}
}
     
	  
