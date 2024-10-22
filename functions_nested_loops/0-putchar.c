#include <stdio.h>
#include "main.h"
/**
*main-entry of program
*Description : Print all blocks of an array 
*Return: Always return 0(Success)
*/
int main(void)
{
int i;
char str[]="_putchar";
for ( i = 0; i < 8; i++)
{
_putchar(str[i]);
}
_putchar('\n');
return (0);
}
