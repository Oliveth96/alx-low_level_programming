#include "main.h"

/**
 * _strchr - locates a character in a string
 * if don't find then return pointer to null
 * @s: string to search
 * @c: char to look for
 * Return: pointer to c or to null if c is not present
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		++s;
	}
	if (c == '\0')
		return (s);
	return (0);
}
