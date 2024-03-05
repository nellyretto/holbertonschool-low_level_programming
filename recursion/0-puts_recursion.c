	#include "main.h"

/**
 *
 * _puts_recursion - printing a string with a new line
 *
 * @s: string with a new line
 */

void _puts_recursion(char *s)

{
	if (*s != '\0)
	{
		_putchar(s[0]);
		_put_recursion(s ++);
	}
	else
	{
		_putchar('\n');
	}
}
