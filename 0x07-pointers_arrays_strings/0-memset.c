#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte
 * @s: The startring address of the memory to be filled
 * @b: The constant byte
 * @n: Number of bytes to be filled
 * Return: A pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
