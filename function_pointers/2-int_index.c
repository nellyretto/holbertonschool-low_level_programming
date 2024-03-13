#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searching for an intenger
 * @array: array to be worked with
 * @cmp: pointer to the function
 * @size: number of elements in the array
 *
 */

int int_index(int *array, int size, int (*cmp)(int))

{
	int n = 0;
	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (n < size)
			if (cmp)array[n]))
				return (n);
			n++;
		}
	}
}


