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
	int i, lead_zero = 1;

	if (n == 0)
	{
		printf("0");
		return;
	}
	for (i = n_bits - 1; i >= 0; i--)
	{
	if ((n >> i) & 1)
	{
	printf("1");
	lead_zero = 0;
	}
	else if(!lead_zero)
	printf("0");
	}
	printf("\n");
}
