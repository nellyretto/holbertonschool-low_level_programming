#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creating array of chars
 *
 * Return: NULL if size is equal to 0
 * Return: pointer to the array if NULL if it fails
 *
 */

char *create_array(unsigned int size, char c)

{
	char *a;
	unsigned int t;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(*a));
	if (a == NULL)
		return (NULL);

	for (t = 0; t < size; t++)
		a[t] = c;

	return (a);
}


