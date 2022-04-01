#include "main.h"

/**
 * _strspn - gets ythe length of a prefix substring
 * @s: string
 * @accept: string
 * Return: an int that it's number of bytes are the same
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, cnt, not_equal;

	not_equal = cnt = 0;
	for (a = 0; s[a] != '\0' && not_equal == 0; ++a)
	{
		not_equal = 1;
		for (b = 0; accept[b] != '\0'; ++b)
		{
			if (s[a] == accept[b])
			{
				not_equal = 0;
				++cnt;
			}
		}
	}
	return (cnt);
}
