#include <stdio.h>
/**
 * main - Entry point
 *
 * Description:
 *
 * Return: Returns 0
 */
int main(void)
{
	int h = 0;

	while (h < 10)
	{
		putchar(h + '0');
		if (h < 9)
		{
			putchar(',');
			putchar(' ');
		}
		h++;
	}
	putchar('\n');
	return (0);
}
