#include "main.h"

/**
 * _strlen - Function counts the length of a string
 * @s: String whose length to be printed
 * Return: Length of a string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
