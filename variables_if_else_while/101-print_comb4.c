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
for (i = 1; i < 1000; i++)
{
int a = i / 100;
int b = (i / 10) % 10;
int c = i % 10;
if ((a < b && b < c) && (a != b && b != c))
{
putchar(a + '0');
putchar(b + '0');
putchar(c + '0');
if (i != 789)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
