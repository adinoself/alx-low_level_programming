#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * check_num - Function that checks if a given string has only digits
 * @str: The string parameter to be checked
 * Return: 0 if successful and 1 if not
 */

int check_num(char *str)
{
	unsigned int count;

	count = 0;

	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		else
		{
			count++;
		}
	}
	return (1);
}

/**
 * main - This is the main function
 * @argc: Parameter number of arguments
 * @argv: Parameter number of array in arguments
 * Return: 0 if successful and 1 if not
 */

int main(int argc, char *argv[])
{
	int count;
	int str_to_int;

	int sum = 0;

	count = 1;

	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
