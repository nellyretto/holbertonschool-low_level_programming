#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - printing a structured dog
 * @d: to print the structured dog
 *
 */

void print_dog(struct dog *d)

{
	if (d == NULL)
		return;

	if (d->name == NULL)
			d->name = "(nil)";
	if(d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %c\nAge: %f\Owner: %c\n", d->name, d->age, d->owner);
}

