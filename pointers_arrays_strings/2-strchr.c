#include <stdlib.h>
#include "main.h"
/**
 * _strchr - locating character in a string
 *
 * @s:  string to check
 * @c: ocurrence to look
 *
 * Return: returning a pointer
 * @s. returning null
 */

char *_strchr(char *s, char c)
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
