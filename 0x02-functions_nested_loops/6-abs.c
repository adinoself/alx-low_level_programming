#include "main.h"

/**
 * _abs - Function checks for absolute value
 *
 * @a: Parameter to be checked
 *
 * Return: a if successful
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a <= 0)
		a = a;
	return (a);
}
