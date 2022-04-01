#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments
 * @argc: first parameter
 * @argv: second parameter
 *
 * Description: prints all arguments it receives
 * Return: Always (0) Success
 */

int main(int argc, char *argv[])
{
	int a;
	
	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
