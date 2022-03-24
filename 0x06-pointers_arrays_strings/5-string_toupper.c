#include "main.h"

/**
 * string_toupper - turn every lowercase letter un a string to uppercase.
 * @str: the string to make all uppercase
 *
 * Return: the string.
 */
char *string_toupper(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; ++a)
	{
		if (str[a] >= 'a' && str[a] <= 'z')
			str[a] -= 32;
	}
	return (str);
}
