#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searching for an intenger
 * @array: array to be worked with
 * @cmp: pointer to the function
 * @size: number of elements in the array
 * Return: int_index returns the index of
 * the first element for which the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))

{
	int i = 0;
		if (array == NULL || cmp == NULL)
		{
			return (-1);
		}
		while (i < size)
			{
			if (cmp(array[i]))
				{
				i++;
				return (i);
				}
			}
	return (-1);
}
