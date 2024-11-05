#include <string.h>
#include <stdio.h>
#include "main.h"
/**
*factorial- Returns the factorial of an integer
*@n: Integer to proceed with
*Return: factorial
*/
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
