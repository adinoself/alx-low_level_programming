#include "main.h"

/**
 * _strlen_recursion - Function that returns the length of a string
 * @s: The parameter
 * Return: The length of the string
 */

int _strlen_recursion(char *s)
{
	int strlen = 0;

	if (*s)
	{
		strlen++;
		strlen += _strlen_recursion(s + 1);
	}
	return (strlen);
}
