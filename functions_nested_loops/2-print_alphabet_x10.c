#include "main.h"
/**
 * print_alphabet_10x - printing alphabet
 *
 */
void print_alphabet_10x(void)
{
	char c;
	int b = 0;
	
	while ( b <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		b++;
	}
	_putchar('\n');
}
