#include "main.h"
/**
 * puts_half - Function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int i, x, longi;

	longi = 0;

	for (i = 0; str[i] != '\0'; i++)
		longi++;

	x = (longi / 2);

	if ((longi % 2) == 1)
		x = ((longi + 1) / 2);

	for (i = x; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
