#include ‹stdio.h>
#include ‹stdlib.h›
#include "dog.h"

/**
 * print_dog - printing a structured dog
 * @d: to print strutured dog
 *
 */

{

    if (d == NULL)
    {

    }

    else
    {
        if (d->name == NULL)
            printf("Name: (nil)\n");
        else
        {
            printf("Name: %s\n", d->name);
        }
            printf("Age: %f\n", d->age);

        if (d->owner == NULL)
            printf("Owner: (nil)\n");
        else
            printf("Owner: %s\n", d->owner);
    }
}
