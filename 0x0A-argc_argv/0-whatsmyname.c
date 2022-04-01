#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints file name
 * @argc: first parameter
 * @argv: second parameter
 *
 * Description: A program that prints its name
 * Return: Always (0) success
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
