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
int *i = a;
int temp;
while (*i != '\0')
{
i++;
}
if (*i == '\0')
{
i--;
}
while (a < i)
{
temp = *a;
a = *i;
*i = temp;
a++;
i--;
}
*i = '\0';
}
