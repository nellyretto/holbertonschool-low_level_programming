#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializating variable of struct dog
 *b
 *
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
