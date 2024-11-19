#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
*main-entry of program
*@argc: arg count
*@argv: Arrays of pointers to argcs
*Return: always 0 (success)
*/
int main(int argc, char **argv)
{
	int num1, num2;
	int (*operator)(int, int);

	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
operator = get_op_func(argv[2]);
	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}
else
printf("%d\n", operator(num1, num2));

return (0);
}
