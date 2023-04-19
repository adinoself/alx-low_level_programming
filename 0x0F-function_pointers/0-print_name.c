#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 * @name: The string to be printed
 * @f: Pointer to a function
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
