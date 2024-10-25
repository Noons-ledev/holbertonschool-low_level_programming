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
int j = 0;
for (i = 0; i <= 99; i++)
{
int a = i / 10;
int b = i % 10;
int c = j / 10;
int d = j % 10;
for (j = 1; j <= 99; j++)
{
if (i < j)
{
putchar(a + '0');
putchar(b + '0');
putchar(' ');
putchar(c + '0');
putchar(d + '0');
}
if (i != 98 && j != 99)
{
putchar(',');
putchar(' ');
}
}
}
return (0);
}
