#include <stdio.h>
#include <stdlib.h>
/**
 *main-entry of program
 *Description: Prints all numbers avoiding double digits
 *Return: Always return 0 (success)
 */
int main(void)
{
int i = 0;
for (i = 1; i < 90; i++)
{
int a = i / 10;
int b = i % 10;
if (a != b && a < b)
{
putchar(a + '0');
putchar(b + '0');
if (i != 89)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
