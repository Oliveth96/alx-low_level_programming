#include "main.h"

/**
 * _memset - fills memory
 * @s: input string
 * @b: input character
 * @n: input size
 *
 * Description: fills memory with a constant byte
 * Return: returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; ++a)
	{
		s[a] = b;
	}
	return (s);
}
