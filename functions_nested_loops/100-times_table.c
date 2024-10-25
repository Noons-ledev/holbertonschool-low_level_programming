#include "main.h"
/**
 *print_times_table - fait ca
 *Description: au dessus
 *@n: Chosen number
 *Return: nothing
 */
void print_times_table(int n)
{
int a;
int b;
if (n >= 0 && n <= 15)
{
for (a = 0; a <= n; a++)
{
for (b = 0; b <= n; b++)
{
int produit = a * b;
if (produit < 10)
{
if (b != 0)
{
_putchar(' ');
_putchar(' ');
}
_putchar(produit + '0');
}
else if (produit >= 10 && produit < 100)
{
_putchar(' ');
_putchar((produit / 10) + '0');
_putchar((produit % 10) + '0');
}
else if (produit >= 100)
{
_putchar((produit / 100) + '0');
_putchar(((produit % 10) / 10) + '0');
_putchar((produit % 10) + '0');
}
if (b != n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
}
