#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
*op_add- addition de deux integers
*@a: First one
*@b: Second one
*Return: Sum value
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
*op_sub-returns substracting b from a
*@a: Integer1
*@b: Integer2
*Return: Value of difference
*/
int op_sub(int a, int b)
{
return (a - b);
}

/**
*op_mul-Product of a and b
*@a: Integer1
*@b: Integer2
*Return: Product
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
*op_div-Division of a and b
*@a: Integer1
*@b: Integer2
*Return: result
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a / b);
}

/**
*op_mod-Modulo of a div by b
*@a: Integer1
*@b: Integer2
*Return: Modulo
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a % b);
}
