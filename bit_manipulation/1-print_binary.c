#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
*print_binary- Prints the binary representation of a number
*@n: Number passed as an argument 
*Return: nothing void
*/
void print_binary(unsigned long int n)
{
	int n_bits = sizeof(n) * 8;
	int i;

	for (i = n_bits - 1; i = 0; i--)
	{
	if ((num >> i) & 1)
	printf("1");
	else
	printf("0");
	}
	printf("\n");
}
