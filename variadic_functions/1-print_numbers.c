#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
*print_numbers- Print all numbers passed as args
*@separator: to print between every number
*@n: number of arg passed to the function
*Return: nothing void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int a = 0;
va_list abc;
if (n == 0)
return;
va_start(abc, n);
for (; a < n; a++)
{
if (separator != NULL && a != (n - 1))
printf("%d%s", va_arg(abc, int), separator);
else
printf("%d", va_arg(abc, int));
}
va_end(abc);
printf("\n");
}

