#include <stdio.h>
/**
 * main - Entry point
 *
 * Describtion: printing letters of the alphabet except q and e
 *
 * Return: Returns 0
 */
int main(void)
{
	char h = 'a';

	while (h <= 'z')
	{
		if (h != 'e' && h != 'q')
		{
			putchar(h);
		}
		h++;
	}
	putchar('\n');
	return (0);
}
