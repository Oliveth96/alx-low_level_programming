#include "main.h"

/**
 * print_square - use # to print box given the size input
 * @size: size of the box you need to print out:
 * Return: void
 */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
