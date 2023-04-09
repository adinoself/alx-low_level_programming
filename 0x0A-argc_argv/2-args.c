#include <stdio.h>
#include "main.h"

/**
 * main - Function that prints all arguments it recieves
 * @argc: Parameter number of arguments
 * @argv: Parameter array of arguments
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
