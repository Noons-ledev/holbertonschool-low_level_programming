#include "main.h"
#include <limits.h>
/**
 *print_number-Prints n 
 *@n: Integer to print
 *Description: Using putchar to print the integer
 *Return: Nothing (void)
 */
void print_number(int n)
{
if (n == INT_MIN)
{
_putchar('-');
_putchar('2');
n = 147483648;
}
else if (n == INT_MAX)
{
_putchar('2');
n = 147483648;
}
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n < 10)
_putchar(n + '0');
else if (n >= 10 && n < 100)
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
else if (n >= 100 && n < 1000)
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
