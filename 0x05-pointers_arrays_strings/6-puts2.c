#include "main.h"

/**
 * puts2 -  Function prints strings while skipping some characters
 * @str: Function parameter
 * Return: 0
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
