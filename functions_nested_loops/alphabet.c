#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{
char i;
for (i = 'a' ; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
