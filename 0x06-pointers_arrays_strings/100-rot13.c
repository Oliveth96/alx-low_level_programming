#include "main.h"

/**
 * rot13 - encode string  you rot 13 so move 13 spaces.
 * @str: string to be encoded
 *
 * Return: encoded string.
 */
char *rot13(char *str)
{
	int a, b;
	char arr1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char arr2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";


	for (a = 0; str[a] != '\0'; ++a)
	{
		for (b = 0; b < 52; ++b)
		{
			if (str[a] == arr1[b])
			{
				str[a] = arr2[b];
				break;
			}
		}
	}
	return (str);
}
