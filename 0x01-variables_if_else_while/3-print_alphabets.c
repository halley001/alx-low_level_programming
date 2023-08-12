#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Printing the lestters of the alphabet
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

	h = 'A';

	while (h <= 'Z')
	{
		putchar(h);
		h++;
	}
	putchar('\n');
	return (0);
}
