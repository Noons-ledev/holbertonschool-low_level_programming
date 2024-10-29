#include <stdio.h>
#include "main.h"
/**
 *print_array-Prints array until element n
 *@a: pointer
 *@n: element number to print until
 *description: voir la haut
 *Return: nothing
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", *(a + i));
if (i != n - 1)
{
printf(", ");
}
}
printf("\n");
}
