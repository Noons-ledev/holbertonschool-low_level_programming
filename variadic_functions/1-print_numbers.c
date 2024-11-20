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
    unsigned int a;
    va_list abc;
    va_start(abc, n);
    for (a = 0; a < n; a++)
    {
        if (separator != NULL)
        printf("%d%s", va_arg(abc, int), separator);
    else 
    printf("%d", va_arg(abc, int));
    }
    va_end(abc);
    printf("\n");
}