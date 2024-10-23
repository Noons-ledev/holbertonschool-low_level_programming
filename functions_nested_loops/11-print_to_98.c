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
printf("%d, ", n);
if ( n < 98 )
{
int n1 = n + 1;
while (n1 < 99)
{
printf("%d, ", n1 );
n1++;
}
}
if ( n > 98)
{
int n2 = n - 1;
while (n2 > 97)
{
printf("%d, ", n2);
n2--;
}
}
}
