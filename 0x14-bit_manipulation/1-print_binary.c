#include "main.h"

/**
 * print_binary - Function that prints the binary
 * equivalent of a decimal number
 * @n: Parameter number to print in binary
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	int x, count = 0;
	unsigned long int current;

	for (x = 63; x >= 0; x--)
	{
		current = n >> x;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}
	}
	if (!count)
	{
		_putchar('0');
	}
}
