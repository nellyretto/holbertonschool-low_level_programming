#include "main.h"
/**
 * main - printing a lowercase alphabet
 *
 * Return: Always (Success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	return (0);
}
