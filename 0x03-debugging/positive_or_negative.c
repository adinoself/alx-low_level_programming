#include "main.h"

/**
 * positive_or_negative - Function checks for positive or negative numbers
 * @i: The parameter to be checked
 * Return: 0 if successful
 */
void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
