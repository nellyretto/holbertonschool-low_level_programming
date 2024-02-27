#include "main.h"

/**
 * _puts - printing a string with a new line
 * @str: pointer to be worked with
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
