#include "main.h"

/**
 *
 * _puts_recursion - printing a string with a new line
 *
 * @s: string with a new line
 */

void _puts_recursion(char *s)

{
	 if (*s != '\0');
	 {
	 _print_rev_recursion(s + 1);
	 _putchar(*s)
	 }
}
