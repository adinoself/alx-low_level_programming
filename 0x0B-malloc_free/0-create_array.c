#include <stdlib.h>
#include "main.h"

/**
 * create_array - Function creates an array of chars
 * @size: The size of the array
 * @c: The character to assign
 * Return: A pointer to the array and NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int a;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		str[a] = c;
	}
	return (str);
}
