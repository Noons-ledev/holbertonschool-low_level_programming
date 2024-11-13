#include <stdlib.h>
#include "dog.h"
/**
*string_length-Used to get length of strings
*@str: String to calculate
*Return: Integer corresponding
*/

int string_length(char *str)
{
int a = 0;
while (str[a] != '\0')
a++;
return (a);
}

/**
 *new_dog-Create a new dog and store a copy of name and owner
 *@name: name of the doggo
 *@age: age of the doggo
 *@owner: Owner of the doggo
 *Return: dog_t type (dog_t based on function)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int a, name_len, owner_len;
dog_t *doggo = malloc(sizeof(dog_t));
if (doggo == NULL)
return (NULL);
name_len = string_length(name) + 1;
doggo->name = malloc(name_len);
if (doggo->name == NULL)
{
free(doggo);
return (NULL);
}
for (a = 0; a < name_len; a++)
{
doggo->name[a] = name[a];
}
doggo->name[name_len - 1] = '\0';
owner_len = string_length(owner) + 1;
doggo->owner = malloc(owner_len);
if (doggo->owner == NULL)
{
free(doggo->name);
free(doggo);
return (NULL);
}
for (a = 0; a < owner_len; a++)
{
doggo->owner[a] = owner[a];
}
doggo->owner[owner_len - 1] = '\0';
doggo->age = age;
return (doggo);
}
