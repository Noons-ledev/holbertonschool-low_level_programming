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
int i = 0;
int temp;
while (a[i] < a[n] && a[i] != '\0')
{
i++;
}
if (a[i] == '\0')
{
i--;
}
while (a < a[i])
{
temp = *a;
a = a[i];
a[i] = temp;
a++;
i--;
}
}
  
  
  
