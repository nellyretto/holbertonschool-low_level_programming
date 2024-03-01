# include "main.h"

/**
 * _memset - filling memory with a constant byte
 * b is the constant byte
 * @src: copying from this memory
 * @dest: returning pointer here
 * @n: numbers of bytes being copied
 *  Return: returning pointer to dest
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}


