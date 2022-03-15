#include "main.h"

/**
 * main - putchar
 *
 * _putchar print the characters given
 * Return: Always 0 (Success)
 */
int main(void)
{
	char text[9] = "_putchar";


		int i = 0;	
	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}		
