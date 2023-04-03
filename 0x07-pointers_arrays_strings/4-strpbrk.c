#include "main.h"

/**
 * _strpbrk - Function that searches a string for a set of bytes
 * @s: The input string s
 * @accept: The input string accept
 * Return: 0 if succesfull and NULL byte terminator if not
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
