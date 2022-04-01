#include "main.h"
#include <stdio.h>

/**
 * _strstr - locate string
 * @haystack: input string
 * @needle: input needles
 *
 * Return: returns a pointer to the beginning of the located
 * substring, else, NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[a + b] != needle[b])
				break;
		}
		if (!needle[b])
			return (&haystack[a]);
	}
	return (NULL);
}
