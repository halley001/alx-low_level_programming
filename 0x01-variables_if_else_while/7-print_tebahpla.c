#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: reverse alphabet
 *
 * Return: Returns 0
 */
int main(void)
{
	char h = 'z';

	while (h >= 'a')
	{
		putchar(h);
		h--;
	}
	putchar('\n');
	return (0);
}
