#include "main.h"
/**
 *print_square- print a size squared of #
 *@size: Define size of the square
 *Description: voir au dessus
 *Return: nothing (void)
 *
 */
void print_square(int size)
{
int a;
int b;
if (size == 0 || size < 0)
{
_putchar('\n');
}
else
{
for (a = 0; a < size; a++)
{
for (b = 0; b < size; b++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
