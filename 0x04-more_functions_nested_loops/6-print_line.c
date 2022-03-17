#include "main.h"

/**
 * print_line - Draws a straight line usinge the character _.
 * @n: The number of _ characters to be printed.
 */
void print_ine(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}
	
	_putchar('\n');
}
