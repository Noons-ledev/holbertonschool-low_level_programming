#include "main.h"
/**
 *print_number-Prints n 
 *@n: Integer to print
 *Description: Using putchar to print the integer
 *Return: Nothing (void)
 */
void print_number(int n)
{
if (n >= 0)
{
if (n < 10)
_putchar(n + '0');
else if (n >= 10 && n < 100)
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
else if (n >= 100 & n < 1000)
{
_putchar((n / 100) + '0');
_putchar(((n / 10) % 10) + '0');
_putchar((n % 10) + '0');
}
else if (n >= 1000)
{
_putchar((n/1000) + '0');
_putchar(((n / 100) % 10) + '0');
_putchar(((n / 10) % 10) + '0');
_putchar((n % 10) + '0');
}
}
else if (n < 0)
{
n = -n;
if (n > -10)
{
_putchar('-');
_putchar(n + '0');
}
else if (n <= -10 && n > -100)
{
_putchar('-');
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
else if (n < -100 && n > -1000)
{
_putchar('-');
_putchar((n/1000) + '0');
_putchar(((n / 100) % 10) + '0');
_putchar(((n / 10) % 10) + '0');
_putchar((n % 10) + '0');
}
}
}
