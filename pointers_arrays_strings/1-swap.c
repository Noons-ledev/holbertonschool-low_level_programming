#include "main.h"
/**
 *swap_int- swap two values using pointers
 *@a: Value1
 *@b: Value 2
 *description: does it
 *Return: nothing
 */

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
