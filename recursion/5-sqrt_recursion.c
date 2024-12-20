#include "main.h"
/**
*_sqrt_check- Checks for a natural square root of n
*@n: Integer to search from
*@guess: integer with which we try to find sqrt of n
*Return: guess for a natural sqrt
*/
int _sqrt_check(int n, int guess)
{
if (guess * guess > n)
{
return (-1);
}
if (guess * guess == n)
{
return (guess);
}
return (_sqrt_check(n, guess + 1));
}

/**
*_sqrt_recursion- Return the square root of a integer
*@n: Integer to check
*Return: natural square root or error
*/

int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
if (n == 1)
return (1);
if (n < 0)
return (-1);
return (_sqrt_check(n, 0));
}
