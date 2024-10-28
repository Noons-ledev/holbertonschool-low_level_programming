#include "main.h"
/**
 *print_triangle- print un triangle
 *@size: Taille a definir
 *Description: does it
 *Return: nothing
 */
void print_triangle(int size)
{
int a;
int b;
if (size == 0 || size < 0)
{
_putchar('\n');
}
else
{
for (a = 0; a <= size; a++)
{
  for (b = size; b = (a - 1); b--)
{
_putchar(' ');
}
_putchar('#');
_putchar('\n');
}
}
}
