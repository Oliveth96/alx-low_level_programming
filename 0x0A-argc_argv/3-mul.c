#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two arguments and prints result
 * @s: string to be converted
 *
 * Return: (0) if no errors
 */
int _atoi(char *s)
{
	int a, b, c, len, d, digit;

	a = 0;
	b = 0;
	c = 0;
	len = 0;
	d = 0;
	digit = 0;

	while (s[len] != '\0')
		len ++;

	while (a < len && d == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			c = c * 10 + digit;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}

	if (d == 0)
		return (0);

	return (c);
}

/**
 * main - multiples two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, first_num, sec_num;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	first_num = _atoi(argv[1]);
	sec_num = _atoi(argv[2]);
	result = first_num * sec_num;

	printf("%d\n", result);

	return (0);
}
