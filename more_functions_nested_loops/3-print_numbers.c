#include "main.h"
/**
 *
 *@c: variable being worked on
 *
 * print_numbers - new line on the digits
 *
 * Return: always zero (success)
 *
 */

void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
_putchar('\n');
}
