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
int a = 1;
int b = 2;
int n;
int sum;
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
