#include <stdlib.h>
#include "main.h"
/**
*print_name-Prints a name by manipulating the pointer
*@name: String containing the name
*@f: Pointer to function
*/
void print_name(char *name, void (*f)(char *s))
{
	(*f)(name);
}




