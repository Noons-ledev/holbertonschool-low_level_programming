#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *main- entry
 *description: fib 
 *Return: always 0
 */

int main(void)
{
double a = 1;
double b = 2;
int n;
double sum;
for (n = 0; n < 50; n++)
{
printf("%.0f", a);
sum = a + b;
a = b;
b = sum;
if (n != 49)
{
printf(", ");
}
}
printf("\n");
return (0);
}
