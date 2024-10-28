#include <stdio.h>
#include "main.h"
/**
 *main- printf the fizzbuzz game
 *Description: does it
 *Return: Always 0 (success)
 *
 */

int main(void)
{
int n;
for (n = 1; n <= 100; n++)
{
if (n % 3 == 0 && n % 5 == 0)
{
printf("FizzBuzz ");
}
else if ( n % 3 == 0)
{
printf("Fizz ");
}
else if ( n % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", n);
}
}
printf("\n");
return (0);
}
