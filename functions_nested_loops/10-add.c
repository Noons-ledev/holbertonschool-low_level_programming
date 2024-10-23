#include "main.h"
/**
 *add- additionne deux chiffres donnes
 *description : On entre deux chiffre 
 *Return: Always return 0(success)
 */

Int add(int a, int b)
{
int res = a + b;
int r = res / 100;
int e = (res / 10) / 10;
int s = res % 10;
if (res < 0)
{
_putchar('-');
}
else
{
if (res > 100)
{
_putchar(r + '0');
_putchar(e + '0');
_putchar(s + '0');
_putchar('\n');
}
if (res < 100 
{
_putchar((res / 10) + '0');
_putchar((res % 10) + '0');

}
