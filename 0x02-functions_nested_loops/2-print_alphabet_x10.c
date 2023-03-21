#include "main.h"

/**
 * print_alphabet_x10 - Function prints the alphabet in lower case ten times
 * Return: 0 if successful
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}
}
