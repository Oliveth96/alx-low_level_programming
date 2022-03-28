#include "main.h"

/**
 * _strpbrk - search a string
 * @s: strings to search for
 * @accept: string to search in
 * Return: returns accepted string
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a;

	while (*s != '\0')
	{
		for (a = 0; accrpt[a] != '\0'; ++a)
		{
			if (*s == accept[a])
			{
				return (s);
			}
		}
		++s;
	}
	return (0);
}
