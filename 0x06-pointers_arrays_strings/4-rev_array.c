#include "main.h"

/**
 * reverse_array - reverses any array
 * @x: an array of ints;
 * @y: elements in array
 *
 * Return: nothing.
 */
void reverse_array(int *x, int *y)
{
	int a, b, temp;

	for (a = 0, b = y - 1; a < b; ++a, --b)
	{
		temp = x[a];
		x[a] = x[b];
		x[b] = temp;
	}
}
