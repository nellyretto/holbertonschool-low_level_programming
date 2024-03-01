#include <stdlib.h>
# include "main.h"

/**
 * _strpbrk - searching for bytes on a string
 * @s: returning pointer here
 * @accept: searchin foe this bytes
 *
 * Return: returning pointer to s or null if bytes are not found
 */

char *_strpbrk(char *s, char *accept)

{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
