#include "main.h"
/**
 *reverse_array- reverse an array from n char
 *@a: string to work into
 *@n: element n to start the reverse from
 *description: does it
 *Return: nothing (void)
 */
void reverse_array(int *a, int n)
{
int *i = a + n - 1;
int temp;
while (a < i)
{
temp = *a;
*a = *i;
*i = temp;
i--;
a++;
}
}


