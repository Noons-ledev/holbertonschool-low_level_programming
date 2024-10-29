#include <stdbool.h>
#include "main.h"
/**
 *_atoi(char *s)-Converti a string en integer
 *@s: Pointeur vers l'element premier du string
 *description: voila
 *Return: nothing
 *
 */
int _atoi(char *s)
{
int sign = 1;
double result = 0;
bool _numberin = false;
while (*s != '\0')
{
if (*s >= '0' && *s <= '9')
{
_numberin = true;
result = result * 10 + (*s - '0');
}
else if (_numberin)
{
break;
}
if (*s == '-')
{
sign *= -1;
}
s++;
}
if (!_numberin)
{
return (0);
}
return (sign *result);
}
