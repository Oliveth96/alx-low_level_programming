#include "main.h"

/**
 * _strncat - concats two strings given bit count of string to add..
 * @dest: string to add to and return.
 * @src: string to concat onto dest.
 * @n: length of string to be added.
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; ++a)
		;
	for (b = 0; b < n && src[b] != '\0'; ++b, ++a)
		dest[a] = src[b];
	dest[a] = '\0';
	return (dest);
}
