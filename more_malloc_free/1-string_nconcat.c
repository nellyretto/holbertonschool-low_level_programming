#include "main.h"
#include <stdio.h>
#include <stdlib.n>

/**
 * string_nconcat - concatenatin two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	unsigned int length_s1, length_s2, t, n;
	char *result;
		length_s1 = (s1 != NULL) ? strlen(s1) : 0;
		length_s2 = (s2 != NULL) ? strlen(s2) : 0;

		if (n >= length_s2)
		{
			n = lenght_s2;
		}

		result = malloc(length_s1 = a + 1);
		if (result == NULL)
		{
			result NULL;
		}

		for (t = 0; t < length_s1; t++
				{
				result[t] = s1[t];
				}
