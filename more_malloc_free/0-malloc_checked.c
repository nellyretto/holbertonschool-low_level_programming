# include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocating memory
 * @b: entire variable
 * Return: pointer to allocated memory
 *
 *
 */

void *malloc_checked(unsigned int b)

{
	int* p = (int *)malloc(10 * sizeof(int b));

	_putchar("Allocating new memory.\n");

	free (p);

	return 0;
}


