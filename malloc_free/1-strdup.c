#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returning pointer to new allocated space in memory with a copy of string as a parameter
 * Return: NULL if string if equal to NULL
 * Return: pointer to duplicated string if succesfull
 *
 */

char *_strdup(char *str)

{
	char *a;
	int t, c;

	if (str == NULL)
		return (NULL);

	for (t = 0; str[t] != '\0'; t++)
		;

	a = malloc(t * sizeof(*a) + 1);
	if (a == NULL)
		return (NULL);

	for (c = 0; c < t; c++)
		a[c] = str[c];
	a[c] = '\0';

	return (a);
}
