#include "main.h"

int is_prime(int x, int y);

/**
 * is_prime_number - Function that returns 1 if input is prime number
 * otherwise it returns 0
 * @n: The parameter
 *
 * Return: 1 if n is a prime number, and 0 if otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (is_prime(n, n - 1));
	}
}

/**
 * is_prime - Function that uses recursion to calculates if a number is prime
 * @x: The parameter 1
 * @y: The parameter 2
 *
 * Return: 1 if n is prime, and 0 if otherwise
 */
int is_prime(int x, int y)
{
	if (y == 1)
	{
		return (1);
	}
	else if (x % y == 0 && y > 0)
	{
		return (0);
	}
	else
	{
		return (is_prime(x, y - 1));
	}
}
