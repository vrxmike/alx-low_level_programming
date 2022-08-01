#include "dog.h"
/**
 *init_dog - Initializes a dog
 *@d: Dog to be initialized
 *@name: Name of the Dog
 *@age: Age of dog
 *@owner: Owner of dog
 *Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
