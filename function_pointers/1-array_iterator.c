#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executing a function with elements of arrays
 * @size: size of the array
 * @action: pointer to the function
 * @array: array to be passed as function
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
		i++;
		}
	}
}
