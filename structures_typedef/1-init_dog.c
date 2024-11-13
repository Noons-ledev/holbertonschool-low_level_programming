#include <stdlib.h>
#include "main.h"
/**
 *init_dog- initializes variables of the struct
 *@d: pointer to struct dog
 *@name: name of the doggo
 *@age: age of the doggo
 *owner: owner of the doggo
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
