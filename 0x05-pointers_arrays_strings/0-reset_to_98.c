#include "main.h"

/**
 * reset_to_98 - reset to 98
 * @n: input value
 *
 * Description: takes a pointer to an int as as parameter and updates the value
 * Return: Always (0)
 */

void reset_to_98(int *n)
{
	int *num;
	
	int x = 98;
	
	num = &x;
	*n = *num;
}
