#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Function returns a pointer to a newly allocated space
 * @str: Character
 * Return: Pointer if successful and NULL if not
 */

char *_strdup(char *str)
{
	char *iii;
	int a, r = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	iii = malloc(sizeof(char) * (a + 1));
	if (iii == NULL)
	{
		return (NULL);
	}
	for (r = 0; r < str[r]; r++)
	{
		iii[r] = str[r];
	}
	return (iii);
}
