#include<stdio.h>

/**
 * main - This is the main functioin
 *
 * Return: 0 if successful
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
