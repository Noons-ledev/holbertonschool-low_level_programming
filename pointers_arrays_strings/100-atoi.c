#include <stdbool.h>
#include "main.h"
/**
 *_atoi(char *s)-Converti a string en integer
 *@s: Pointeur vers l'element premier du string
 *description: voila
 *return: nothing
 *
 */
int _atoi(char *s)
{
int sign = 1;
int result = 0;
bool _numberin = false;
while (*s != '\0')
{
if (*s >= '0' && *s <= '9')
{
_numberin = true;
result = result * 10 + (*s - '0');
}
if (*s == '-')
{
sign *= -1;
}
s++;
}
if (sign < 0)
{
result = -result;
}
if (!_numberin)
{
return (0);
}
return (sign * result);
}
