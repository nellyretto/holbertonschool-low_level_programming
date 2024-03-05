#include "main.h"

/**
 * _pow_recursion - returning the value of x raised to y
 *
 * @x: raising value
 * @y: to be raised
 *
 * Return: returning value of power and raising
 *
 */

int _pow_recursion(int x, int y)

{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}


