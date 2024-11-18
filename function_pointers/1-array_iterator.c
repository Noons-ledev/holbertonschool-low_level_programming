#include <stdlib.h>
#include "function_pointers.h"
/**
*array_iterator- calls a function for each element in the array
*@array: array to manipulate
*@size: size of the array
*@action: Pointer to function
*Return: Nothing void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int a;

	for (a = 0; a < size; a++)
	(*action)(array[a]);
}

