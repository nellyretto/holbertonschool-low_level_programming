#include <stdlib.>
#include "dog.h"

/**
 * free_dog - freeing dogs
 * @d: to free the dog
 *
 */

void free_dog(dog_t *d);

{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}



