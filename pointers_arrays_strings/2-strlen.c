#include "main.h"

/**
 * _strlen - returning length of string 
 * @s: string to be counted
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}#in
