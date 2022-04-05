#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *s)

/**
 * argstostr - concantenates all the arguments
 * @c: input params
 * @v: array of all arguments
 * Each argument should be followed by a \n in the new string
 *
 * Return: pointer to resulting string
 * returns NULL if ac == 0 or av == NULL
 * returns NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int length = 0;
	int i, j;
	int k = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		length += _strlen(av[i]);

	str = malloc(sizeof(char) * (length + ac + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			str[k] = av[i][j];

		str[k] = '\n';
		k++;
	}

	str[k] = '\0';

	return (str);
}

/**
 * _strlen - finds the length of a string
 * @s: address of dirst character in the string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}

	return (length);
}
