#include "main.h"
/**
 * times_table-Prints times table
 *Description : Nested loops
 *Return: Nothing (void)
 */
void times_table(void)
{
int a = 0;
int b = 0;
for (a = 0; a <=9; a++)
{
int produit = a * b;
_putchar(produit + '0');
_putchar(',');
_putchar(' ');
_putchar(' ');
for (b = 0; b <= 9;b++)
{
_putchar(produit + '0');
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}
}
