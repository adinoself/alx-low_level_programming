#include "main.h"

/**
 * print_alphabet - This function prints the alphabet in lower case
 *
 * Return: 0 if successful
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
