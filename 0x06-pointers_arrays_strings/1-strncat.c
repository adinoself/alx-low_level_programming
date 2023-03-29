#include "main.h"

/**
 * _strncat - Function concatenates two strings with n bytes
 * from src
 * @dest: Destination string
 * @src: Source string
 * @n: Number of characters to be appended
 * Return: Dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);


}
