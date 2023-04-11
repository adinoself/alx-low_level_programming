#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Function that returns a pointer to a 2
 * dimensional array of integers
 * @width: Parameter width
 * @height: Parameter height
 * Return: Pinter but if width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int **xyz;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	xyz = malloc(sizeof(int *) * height);
	if (xyz == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		xyz[i] = malloc(sizeof(int) * width);
		if (xyz[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(xyz[i]);
			}
			free(xyz);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			xyz[i][j] = 0;
		}
	}
	return (xyz);
}
