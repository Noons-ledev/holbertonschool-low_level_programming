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
for (i = 0; i <= 98; i++)
{
for (j = 1; j <= 99; j++)
{
if ((i / 10) == 0)
{
putchar(0 + '0');
}
else
{
putchar((i / 10) + '0');
}
putchar((i % 10) + '0');
putchar(' ');
putchar((j / 10) + '0');
putchar((j % 10) + '0');
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
