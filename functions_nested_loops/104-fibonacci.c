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
unsigned long long a = 1;
unsigned long long b = 2;
int n;
unsigned long long sum;
for (n = 0; n < 98; n++)
{
printf("%.0f", a);
sum = a + b;
a = b;
b = sum;
if (n != 97)
{
printf(", ");
}
}
printf("\n");
return (0);
}
