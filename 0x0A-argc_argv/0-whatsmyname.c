#include <stdio.h>
#include "main.h"

/**
 * main - Function that prints its name followed by a new line
 * @argc: Parameter for number of arguments
 * @argv: Parameter for array of arguments
 * Return: 0 if successful
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
