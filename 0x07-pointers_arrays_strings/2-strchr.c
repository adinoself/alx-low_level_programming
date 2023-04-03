#include "main.h"

/**
 * _strchr - Function that locates a character in a string
 * @s: Input
 * @c: Input
 * Return: 0 if successful, NULL if character not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
