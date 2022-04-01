#include "main.h"

/**
 * _strcmp - compares 2 strings and returns 0
 * if the two strings are the same.
 * if not the same it will return the difference between
 * the first two chars that are not the same so *x1 - x2,
 * this will be a positive or negative number.
 * @x1: a string to be compared.
 * @x2: a string to be compared.
 *
 * Return: 0 if equal r positive/negative number otherwise.
 */
int _strcmp(char *x1, char *x2)
{
	int a;

	for (a = 0; x1[a] == x2[a] && x1[a] != '\0'; ++a)
		;
	return (x1[a] - x2[a]);
}
