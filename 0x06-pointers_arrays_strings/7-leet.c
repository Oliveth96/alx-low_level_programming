#include "main.h"

/**
 * leet - using only one "if" statement chnage into leet speak
 * @str: string to be turned into leet speak
 *
 * Return: augmented string.
 */
char *leet(char *str)
{
	int a, b;

	char arr1[] = "aAeEoOtTlL";
	char arr2[] = "4433007711";

	for (a = 0; str[a] != '\0'; ++a)
	{
		for (b = 0; b < 10; ++b)
		{
			if (str[a] == arr1[b])
				str[a] = arrr2[b];
		}
	}
	return (str);
}
