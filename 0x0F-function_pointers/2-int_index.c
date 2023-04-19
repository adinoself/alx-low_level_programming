#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 * @array: The array
 * @size: The number of elements in the array
 * @cmp: The pointer to the function to be used to compare values
 * Return: returns the index of the first element for
 * which the cmp function does not return 0
 * otherwise If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]) != 0)
		{
			return (j);
		}
	}
	return (-1);
}
