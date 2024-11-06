#include <stdio.h>
#include <stdlib.h>
/**
 *main-Entry
 *@argc: arg count
 *@argv: arg array
 *Return: (0) if no error
 */
int main(int argc, char *argv[])
{
int produit, num1, num2;
if (argc != 3)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
produit = num1 *num2;
printf("%d\n", produit);
return (0);
}
