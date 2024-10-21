#include <stdio.h>

/**
 *main-Entry of program
 *Description:display from 0 to 9 with putchar
 *Return: Always return 0(Success)
 */
int main(void)
{
char digit;
for (digit = '0'; digit <='9'; digit ++)
{
putchar(digit);
}
putchar('\n');
return (0);
}
