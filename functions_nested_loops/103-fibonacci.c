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
double res = 0;
for (n = 0; n < 50; n++)
{
while (a < 4000000)
{
sum = a + b;
res = res + a;
a = b;
b = sum;
}
}
printf("%.0f\n", res);
return (0);
}
