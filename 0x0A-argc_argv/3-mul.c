#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiples two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: (0) if no errors
 */
int main(int argc, char *argv[])
{
	int i, first_num, sec_num, product;

	if (argc != 3)
	{
		return (printf("Error\n"), 1);
	}
	for (i = 0; i < argc; i++)
	{
		first_num = _atoi(argv[1]);
		sec_num = _atoi(argv[2]);
	}
	product = first_num * sec_num;
	printf("%d\n", result);
	return (0);
}
