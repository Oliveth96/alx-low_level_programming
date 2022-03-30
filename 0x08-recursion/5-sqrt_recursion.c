#include "main.h"

/**
 * is_square_root - determines the square root of
 * @x: an input value
 * @y: input value
 *
 * Decription: determines the square root
 * Return: returns the input val
 */

int is_square_root(int x, int y)
{
	if (y * y > x)
	{
		return (-1);
	}
	if (y * y == x)
	{
		return (y);
	}
	return (is_square_root_(x, y + 1));
}

/**
 * _sqrt_recursion - returns square root
 * @n: input size
 *
 * Description: if n des not have a natural square root,
 * the function should return -1
 * Return: returns the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (is_square_root(n, 1));
}
