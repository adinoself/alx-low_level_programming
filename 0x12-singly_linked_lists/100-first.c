#include <stdio.h>
#include "lists.h"

void first(void) __attribute__ ((constructor));

/**
 * first - Function that prints a sentence before the main
 * function is executed
 * Return: Nothing
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
