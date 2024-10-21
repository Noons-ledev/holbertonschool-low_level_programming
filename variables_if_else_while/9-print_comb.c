#include <stdio.h>

/**
 *main-Entry of program
 *Description: Display all comb of single digits
 *Return: Always return 0 (Success)
 */
int main(void)
{
char digit;
for (digit = '0'; digit <= '9'; digit++)
{
putchar(digit);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
