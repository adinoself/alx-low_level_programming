#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @dest: Destination memory area
 * @src: Source memory area
 * @n: Number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int i = n;

	for (; x < i; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
