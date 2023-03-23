#include "main.h"

/**
 * print_numbers - Function prints numbers form 0 to 9
 * Return: The numbers 0 to 9
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
