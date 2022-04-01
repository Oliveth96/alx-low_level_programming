#include "main.h"

/**
 * _strncpy - copy src into dest and go to n bits.
 * @dest: where to copy the string and what is returned.
 * @src: the string to be copied.
 * @n: the number of places to copy
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; ++a)
		dest[a] = src[a];
	for ( ; a < n; ++a)
		dest[a] = '\0';
	return (dest);
}
