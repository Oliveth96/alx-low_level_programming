#include "function_pointers.h"

/**
 * print_name - prints a nme.
 * @name: The name to be printed.
 * @f: A pointer to a function that prints a name.
 *
 * Return: Nothing
 */
void print_name(char *name, void(*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
