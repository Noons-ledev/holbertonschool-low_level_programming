#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
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
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
if (d->owner == NULL)
printf("Owner: (nil)\n");
else
printf("Owner: %s\n", d->owner);
}
