#include <stdlib.h>
#include "main.h"
/**
* _strstr - locating substring 
*
* @haystack: longer string
* @needle: looking for this subtsring
*
* Return: returning pointer to the beggining
*
*/

char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
