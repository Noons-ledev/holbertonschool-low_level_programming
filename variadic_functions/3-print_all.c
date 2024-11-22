#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
*print_c-prints a char
*@arg: list I'm on
*Return: nothing void
*/
void print_c(va_list arg)
{
char i = va_arg(arg, int);
printf("%c", i);
}
/**
*print_i- Prints an integer
*@arg: List I'm working on
*Return: nothing void
*/
void print_i(va_list arg)
{
int i = va_arg(arg, int);
printf("%d", i);
}
/**
*print_f-prints a float (converted into a double)
*@arg: List
*Return: nothing void
*/
void print_f(va_list arg)
{
float a = va_arg(arg, double);
printf("%f", a);
}
/**
*print_str-prints a string
*@arg:list
*Return: Nothing void
*/
void print_str(va_list arg)
{
char *str = va_arg(arg, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
}
/**
*print_all- prints all arguments matching using specifiers
*@format: Constant pointer to a constant string
*Return: Nothing void
*/
void print_all(const char * const format, ...)
{
int i = 0;
int j;
int espace = 0;
va_list arg;
char *to_find = "cifs";
void (*fctn_call[4])(va_list) = {print_c, print_i, print_f, print_str};
va_start(arg, format);
while (format && format[i])
{
j = 0;
while (to_find[j] != '\0')
{
if (format[i] == to_find[j])
{
printf(espace ? ", ": "");
fctn_call[j](arg);
espace = 1;
break;
}
j++;
}
i++;
}
va_end(arg);
printf("\n");
}
