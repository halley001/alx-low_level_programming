#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Printing a string exactly as it was given
 *
 * Return: Returns 1
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(str, sizeof(char), sizeof(str), stderr);
	return (1);
}
