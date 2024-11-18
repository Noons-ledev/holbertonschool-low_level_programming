#include <stdlib.h>
#include "function_pointers.h"
/**
*int_index-Searches for an integer
*@array: Array to go through
*@size: Size of the array
*@cmp: pointer to the function to be used to compare values
*Return: 0 or -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int a;
if (size <= 0)
return (-1);
for (a = 0; a < size; a++)
{
(*cmp)(array[a]);
if ((*cmp)(array[a]) != 0)
return (a);
}
return (-1);
}
