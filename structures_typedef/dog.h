#ifndef DOG_H
#define DOG_H
/**
 *struct dog- Struct containing our data
 *@name: Name of the doggo
 *@age: Age of the doggo
 *@owner:Owner of the doggo
 */

typedef struct dog
{
char *name;
float age;
char *owner;
}
dog_t;
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
