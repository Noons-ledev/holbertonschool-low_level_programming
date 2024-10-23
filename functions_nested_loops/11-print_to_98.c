#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - print to 98
 *@n: Number to start with
 *Description : Count depends on initial value for n
 *Return: Always return (success)
 */
void print_to_98(int n)
{
if (n == 98)
{
printf("%d\n", n);
}
else
{
printf("%d, ", n);
}
if (n < 98)
{
int n1 = n + 1;
for (n1 = n1; n1 < 99; n1++)
{
if (n1 == 98)
{
printf("%d\n", n1);
}
else
{
printf("%d, ", n1);
}
}
}
if (n > 98)
{
int n2 = n - 1;
for (n2 = n2; n2 > 97; n2--)
{
if (n2 == 98)
{
printf("%d\n", n2);
}
else
{
printf("%d, ", n2);
}
}
}
}
