#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
*clear_bit- sets the value of the nth bit of a number to 0
*@n:pointer to number to check on
*@index: nth bit to check in the number
*Return: the bit
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int n_bits;

n_bits = sizeof(*n) * 8;
if (index >= n_bits)
return (-1);
*n &= ~(1UL << index);
return (1);
}
