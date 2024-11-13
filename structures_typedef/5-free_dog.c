#include <stdlib.h>
#include "dog.h"
/**
 *free_dog- frees my dog_t structure
 *@d: Pointer to the entire structure
 *Return: Nothing void
 */

void free_dog(dog_t *d)
{
if (d == NULL)
return;
if (d->name == NULL)
return;
free(d->name);
if (d->owner == NULL)
return;
free(d->owner);
free(d);
}
