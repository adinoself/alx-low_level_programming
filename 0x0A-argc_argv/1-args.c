#include <stdio.h>
#include "main.h"

/**
 * main - Function that prints the number of arguments passed into it
 * @argc: Parameter number of arguments
 * @argv: Parameter array of arguments
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	(void) argv; /*This ignores the argv to prevent a compilation error*/
	printf("%d\n", argc - 1);
	return (0);
}
