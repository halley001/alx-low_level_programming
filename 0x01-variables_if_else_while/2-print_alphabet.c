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
	for (int h = 97; h <= 122; h++)
	{
		putchar(h);
	}

	putchar('\n');
	return (0);
}
