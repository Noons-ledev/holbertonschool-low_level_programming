#include <stdio.h>

/**
 *main-Entry of program
 *Description: print all hexa char from 0-9 to a-f
 *Return: Always return 0(Success)
 */
int main(void)
{
char HexDigit;
for ( HexDigit = '0'; HexDigit <= '9'; HexDigit++)
{
putchar(HexDigit);
}
for ( HexDigit = 'a'; HexDigit <= 'f'; HexDigit++)
{
putchar(HexDigit);
}
putchar('\n');
return (0);
}
