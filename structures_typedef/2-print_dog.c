#include ‹stdio.h>
#include ‹stdlib.h›
#include "dog.h"

/**
 * print_dog - printing a structured dog
 * @d: to print strutured dog
 *
 */

void print_dog(struct dog *d)

{
if (d == NULL)
	return;
if （d->name == NULL）
	d->name = " (nil)";
if （d->Owner == NULL）
	d->owner = " (nil)";
printf("Name: 8s\nAge: &f\nOwner: &5\n", d - >name, d - ›age, d - ›owner);
}
