#include "main.h"

/**
 * is_punc - checks for punctuation.
 * @cha: is the char value passed to check if punc.
 * Return: 1 if it is punctuation and 0 if not.
 */
int is_punc(char cha)
{
	if (cha == '.' || cha == ',' || cha == ' ' || cha == '\t' || ch == '\n')
		return (1);
	if (cha == '!' || cha == '?' || cha == ';')
		return (1);
	if (cha == ')' || cha == '(' || cha == '{' || cha == '}')
		return (1);
	else
		return (0);
}
/**
 * cap_string - captilizes the first letter of every word.
 * @str: is the input string to be augmented.
 * Return: the changed string.
 */
char *cap_string(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; ++a)
	{
		if (a == 0 && str[a] >= 'a' && str[i] <= 'z')
			str[a] -= 32;
		else if (is_punc(str[a - 1]) && str[a] >= 'a' && str[a] <= 'z')
			str[a] -= 32;
	}
	return (str);
}