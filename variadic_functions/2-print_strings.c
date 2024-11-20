#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
*print_strings- will print all strings passed as arg
*@separator: String between strings
*@n: number of strings passed to the function
*Return: nothing void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int a = 0;
va_list abc;
va_start(abc, n);
for (; a < n; a++)
{
char *str = va_arg(abc, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (separator != NULL && a != (n - 1))
printf("%s", separator);
}
printf("\n");
va_end(abc);
}
