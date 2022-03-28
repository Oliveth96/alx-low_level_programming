#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - print diagram sum
 * @a: input string
 * @size: input character
 * Description: prints the sum of the two diagonals of a
 * square matrix of integers
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int b;

	unsigned int sum1, sum2;



	sum1 = 0;
	sum2 = 0;

	for (b = 0; b < size; b++)
	{
		sum1 += a[(size * b) + b];
		sum2 += a[(size * (b + 1)) - (b + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
