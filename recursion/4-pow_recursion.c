#include <string.h>
#include <stdio.h>
#include "main.h"
/**
*_pow_recursion- Return x power y
*@x: Integer to return raised
*@y: Power to apply to x
*Return: x^y
*/
int _pow_recursion(int x, int y)
{
if (x == 0 || y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, (y - 1)));
}
