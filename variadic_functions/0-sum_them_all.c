#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
*sum_them_all- Will do that
*@n: Number of argument passed to the function
*Return: Integer type
*/
int sum_them_all(const unsigned int n, ...)
{
    unsigned int i;
    if (n == 0)
    return (0);
    va_list aaa;
    int total = 0;
    va_start (aaa, n);
    for (i = 0; i < n; i++)
    {
        total += va_arg(aaa, int);
    }
    va_end(aaa);
    return (total);
}