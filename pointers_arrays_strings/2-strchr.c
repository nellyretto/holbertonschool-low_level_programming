#include <stdlib.h>
# include "main.h"

/**
 * _strchr - locating character in a string
 * Return: returning pointer in the s string 
 *
 */

char *_strchr(char *s, char c);

{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}


