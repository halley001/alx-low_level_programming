#include <stdio.h>
/**
 * main - Entry point
 *
 * Describtion: printing single digits of base 10 from 0
 *
 * Return: Returns 0
 */
int main(void)
{
	int h = 48;

	while (h < 58)
	{
		putchar(h);
		h++;
	}
	putchar('\n');
	return (0);
}
