#include <stdlib.h>
#include "function_pointers.h"
/**
*print_name-Prints a name by manipulating the pointer
*@name: String containing the name
*@f: Pointer to function
*/
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}




