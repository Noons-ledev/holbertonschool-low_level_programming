#include "main.h"

/**
 * print_alphabet - Writes alphabet lowercase
 * Description - Use of putchar function in the for statement
 * Return : Always 0
 */
void print_alphabet(void)
{
char i;
for (i = 'a' ; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
