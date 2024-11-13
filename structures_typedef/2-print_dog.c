#include <stdlib.h>
#include "dog.h"
/**
*print_dog-Print the structure
*@d: Pointer to the structure and its elements
*return: Nothing void
*/

void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
printf("Name: nil\n");
printf("Name: %s\n", d->name);
printf("Age: %d\n", age);
if (d->owner == NULL)
printf("Owner: nil\n");
printf("Owner: %s\n", d->owner);
}
