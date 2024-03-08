#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocating memory with malloc
 *
 * @b: entire variable
 *
 * Return: pointer to allocated memory
 *
 *
 */

void *malloc_checked(unsigned int b)

{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
