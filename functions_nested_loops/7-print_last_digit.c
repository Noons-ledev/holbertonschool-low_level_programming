#include "main.h"
/**
 *print_last_digit- Print last digit of a given number
 *@n : Number to compare
 *Description:Use of an IF statement
 *Return: Return the last digit
 */
int print_last_digit(int n)
{
int a;
a = n % 10;
if (n < 0)
{
a = -a;
}
_putchar(a + '0');
return (a);
}
