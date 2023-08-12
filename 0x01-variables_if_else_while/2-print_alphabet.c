#include <stdio.h>

/**
 * main - Entry point
 *
 *Description: Print letters of the alphabet in lowercare
 *
 * Return: Returns 0
 */
int main(void)
{
	char h = 'a';

	while (h <= 'z')
	{
		putchar(h);
		h++;
	}

	putchar('\n');
	return (0);
}
