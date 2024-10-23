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
for (b = 0; b <= 9;b++)
{
int produit = a * b;
int p1 = produit / 10;
int p2 = produit % 10;
if (produit < 10 && produit != 0)
{
_putchar(' ');
_putchar(produit + '0');
}
else if (produit == 0)
{
_putchar(produit + '0');
_putchar(',');
_putchar(' ');
}
else if (produit > 10)
{
_putchar(p1 + '0');
_putchar(p2 + '0');
}
if (b < 9 && produit != 0)
{
_putchar(',');
_putchar(' ');
}
else if (b == 9)
{
_putchar('\n');
}
}
}
}
