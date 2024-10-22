#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 * _putchar - writes the character c to stdout
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
/**
 *main-entry point of program
 *Description : Writes all _putchar characters
 *Return: Always return 0 (Success)
 */
int main(void)
{
int i=0;
char str[]="_putchar";
for ( i = 0; i < 8; i++)
{
_putchar(str[i]);
}
_putchar('\n');
return (0);
}  
