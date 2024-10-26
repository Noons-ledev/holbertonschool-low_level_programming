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
printf("%d, ", a);
sum = a + b;
a = b;
b = sum;
}
printf("\n");
return (0);
}
