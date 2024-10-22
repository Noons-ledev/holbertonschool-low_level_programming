#include "main.h"
/**
 *print_sign- prints sign weither it's positive or negative or null
 *@n: Number to check
 *Description: IF ELSE
 *Return: Depends on the sign
 */
int print_sign(int n)
{
if (n > 0)
{
return (1);
_putchar('+');
}
else if (n < 0)
{
return (-1);
_putchar('0');
}
else
{
return (0);
_putchar('-');
}
}
