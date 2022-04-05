#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - allocates space in memory
 * @str: input string
 *
 * Return: returns a pointer to a newly
 * allocated space in memory
 */

char *_strdup(char *str)
{
	char *duplicate_num;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

			duplicate_num = malloc(sizeof(char) * (len + 1));

	if (duplicate_num == NULL)
		return (NULL);

	while ((duplicate_num[i] = str[i]) != '\0')
		i++;

	return (duplicate_number);
}
