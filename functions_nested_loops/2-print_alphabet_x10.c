#include "main.h"
/**
 *print_alphabet_x10 - Prints 10 times alphabet
 *Description: Use of nested loops
 *Return: Always return 0 (Success)
 */

Void print_alphabet_x10(void)
{
int i = 0;
char a;
while (i < 10)
{
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
i++;
}
}
