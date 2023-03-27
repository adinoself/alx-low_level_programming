#include "main.h"

/**
 * swap_int - Function that swaps the value of two integers
 * @a: The first integer
 * @b: The second integer
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
