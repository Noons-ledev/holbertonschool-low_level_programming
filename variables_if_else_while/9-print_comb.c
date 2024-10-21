#include <stdio.h>

/**
 *main-Entry of program
 *Description: Display all comb of single digits
 *Return: Always return 0 (Success)
 */
int main(void)
{
  int i;
for (i = 0; i <= '9'; i++)
{
putchar(i + '0');
if (i < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
