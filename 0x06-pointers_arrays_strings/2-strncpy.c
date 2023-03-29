#include "main.h"
/**
 * _strncpy - Function copies a string
 * @dest: Destination string
 * @src: Sourc string
 * @n: Number of strings
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
