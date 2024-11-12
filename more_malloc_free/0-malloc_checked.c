#include <stdlib.h>
#include "main.h"
/**
 *malloc_checked-allocate memory using malloc
 *@b: Size to give to my pointer
 *Return: Nothing void
 */

void *malloc_checked(unsigned int b)
{
void *bonjour;
bonjour = malloc(b);
if (bonjour == NULL)
exit(98);
}
