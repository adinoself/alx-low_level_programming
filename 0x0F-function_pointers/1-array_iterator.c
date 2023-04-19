#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Function that executes a function
 * given as a parameter on each element of an array
 * @array: The array
 * @size: The size of array
 * @action: Pointer to the function to be executed
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
