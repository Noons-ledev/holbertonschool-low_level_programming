#include "main.h"
/**
*can_divide- Checks for a prime number
*@n: Integer to search from
*@div: integer to incr to compare values
*Return: 1 for prime or 0
*/
int can_divide(int n, int div)
{
if (div * div > n)
return (1);
if ((n % div) == 0)
return (0);
return (can_divide(n, (div + 1)));
}
/**
* is_prime_number-Returns 1 of it is
*@n: Integer to proceed with
*Return: 1 for prime or 0
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
if (n == 2)
return (1);
return (can_divide(n, 2));
}
