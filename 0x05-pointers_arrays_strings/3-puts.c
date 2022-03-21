#include "main.h"

/**
 * _puts - put string
 * @str: first parameter
 *
 * Description: prints a string
 * Return: Always (0)
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
