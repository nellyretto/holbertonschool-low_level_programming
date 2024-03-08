#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenating two strings
 * @n: number of bytes
 * @s: area of memory to be filled
 * @b: copying this chart
 *
 * Return: pointer to the area of memory
 *
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)

{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
