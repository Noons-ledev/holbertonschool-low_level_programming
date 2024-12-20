#include <string.h>
#include <stdio.h>
#include "main.h"
/**
*print_diagsums- Prints primary and secondary sums of diags
*@a: Array to process in
*@size: Size of the diag calcul && array
*Return: nothing (void)
*/
void print_diagsums(int *a, int size)
{
int b, sum1 = 0, sum2 = 0;
for (b = 0; b < size; b++)
{
sum1 += a[b * size + b];
sum2 += a[b * size + (size - 1 - b)];
}
printf("%d, %d\n", sum1, sum2);
}
