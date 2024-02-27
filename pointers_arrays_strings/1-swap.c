#include "main.h"

/**
 * swap_int - swaping two intengers
 *
 * @a: variable to swap
 * @b: variable to swap
 *
 */

void swap_int(int *a, int *b)

{

	 int t;
	
	t = *a;
	*a = *b;
	*b = t;

}
