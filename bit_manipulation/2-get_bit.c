#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
*get_bit- gets the value of the nth bit of a number
*@n: number to check on
*@index: nth bit to check in the number
*Return: the bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int n_bits = sizeof(n) * 8;
	if (index >= n_bits - 1)
	return (-1);
return ((n >> index) & 1);
}
